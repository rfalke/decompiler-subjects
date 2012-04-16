#include <stdio.h>
#include <stdlib.h>
#include <SDL.h>
#include <GL/gl.h>
#include <unistd.h>
#include <math.h>

#define NEWSIDE 1
#define NONEWSIDE 0
#define FIRST 1
#define NOTFIRST 0

GLfloat vertices[80000];
GLfloat normals[80000];
GLuint  indices[60000];
unsigned int vcount = 0;
unsigned int icount = 0;
unsigned int ncount = 0;

void createHedgehog(float fromX, float fromY, float fromZ, 
                    float angleX, float angleY, float dim, int iteration, int newside, int first){
   float nextX, nextY, nextZ, nextdim;
   float oldangX, oldangY;
   float i;

   if(iteration < 0)  return;

   oldangX = angleX;
   oldangY = angleY;
   angleX  = angleX * M_PI / 180.0;
   angleY  = angleY * M_PI / 180.0;

   nextX   = fromX + dim * sinf(angleY) * cosf(angleX);
   nextY   = fromY + dim * sinf(angleY) * sinf(angleX);
   nextZ   = fromZ + dim * cosf(angleY);

   dim     = dim /  2.0f * sqrtf(2.0f);
   nextdim = dim * 0.8f;

   if(first == FIRST){
      for(i =-1.570796326794896619; i < 1.570796326794896619; i += 1.570796326794896619*2.0){
         vertices[vcount++] = fromX + dim * sinf(angleY + 0.7853981633974483096) * cosf(angleX + i);
         vertices[vcount++] = fromY + dim * sinf(angleY + 0.7853981633974483096) * sinf(angleX + i);
         vertices[vcount++] = fromZ + dim * cosf(angleY + 0.7853981633974483096);

         normals[ncount++] = fromX + (dim+1.0) * sinf(angleY + 0.7853981633974483096) * cosf(angleX + i);
         normals[ncount++] = fromY + (dim+1.0) * sinf(angleY + 0.7853981633974483096) * sinf(angleX + i);
         normals[ncount++] = fromZ + (dim+1.0) * cosf(angleY + 0.7853981633974483096);

         vertices[vcount++] = fromX + dim * sinf(angleY - 0.7853981633974483096) * cosf(angleX + i);
         vertices[vcount++] = fromY + dim * sinf(angleY - 0.7853981633974483096) * sinf(angleX + i);
         vertices[vcount++] = fromZ + dim * cosf(angleY - 0.7853981633974483096);

         normals[ncount++] = fromX + (dim+1.0) * sinf(angleY - 0.7853981633974483096) * cosf(angleX + i);
         normals[ncount++] = fromY + (dim+1.0) * sinf(angleY - 0.7853981633974483096) * sinf(angleX + i);
         normals[ncount++] = fromZ + (dim+1.0) * cosf(angleY - 0.7853981633974483096);
      }
   }

   /* Lateral squares */
   for(i = -1.570796326794896619; i < 1.570796326794896619; i += 1.570796326794896619*2.0){

      vertices[vcount++] = nextX + nextdim * sinf(angleY + 0.7853981633974483096) * cosf(angleX + i);
      vertices[vcount++] = nextY + nextdim * sinf(angleY + 0.7853981633974483096) * sinf(angleX + i);
      vertices[vcount++] = nextZ + nextdim * cosf(angleY + 0.7853981633974483096);

      normals[ncount++] = nextX + (nextdim+1.0) * sinf(angleY + 0.7853981633974483096) * cosf(angleX + i);
      normals[ncount++] = nextY + (nextdim+1.0) * sinf(angleY + 0.7853981633974483096) * sinf(angleX + i);
      normals[ncount++] = nextZ + (nextdim+1.0) * cosf(angleY + 0.7853981633974483096);

      vertices[vcount++] = nextX + nextdim * sinf(angleY - 0.7853981633974483096) * cosf(angleX + i);
      vertices[vcount++] = nextY + nextdim * sinf(angleY - 0.7853981633974483096) * sinf(angleX + i);
      vertices[vcount++] = nextZ + nextdim * cosf(angleY - 0.7853981633974483096);

      normals[ncount++] = nextX + (nextdim+1.0) * sinf(angleY - 0.7853981633974483096) * cosf(angleX + i);
      normals[ncount++] = nextY + (nextdim+1.0) * sinf(angleY - 0.7853981633974483096) * sinf(angleX + i);
      normals[ncount++] = nextZ + (nextdim+1.0) * cosf(angleY - 0.7853981633974483096);

   }

   /* For other faces no need new vertices */
/*FIXME már csak ezt kell feltölteni*/
   indices[icount++] = vcount / 3 - 8;
   indices[icount++] = vcount / 3 - 7;
   indices[icount++] = vcount / 3 - 3;
   indices[icount++] = vcount / 3 - 4;

   indices[icount++] = vcount / 3 - 6;
   indices[icount++] = vcount / 3 - 5;
   indices[icount++] = vcount / 3 - 1;
   indices[icount++] = vcount / 3 - 2;

   indices[icount++] = vcount / 3 - 7;
   indices[icount++] = vcount / 3 - 3;
   indices[icount++] = vcount / 3 - 1;
   indices[icount++] = vcount / 3 - 5;

   indices[icount++] = vcount / 3 - 8;
   indices[icount++] = vcount / 3 - 4;
   indices[icount++] = vcount / 3 - 2;
   indices[icount++] = vcount / 3 - 6;

   nextdim = nextdim * 2.0f / sqrtf(2.0f);

   createHedgehog(nextX, nextY, nextZ, oldangX, oldangY + 10.0, nextdim, iteration-1, newside, NOTFIRST);

   if(newside == NONEWSIDE) return;

   for(i = -90.0f; i < 91.0f; i += 180.0f){
      createHedgehog(nextX, nextY, nextZ, oldangX + i, oldangY, nextdim, iteration-1, NONEWSIDE, FIRST);
      createHedgehog(nextX, nextY, nextZ, oldangX, oldangY + i, nextdim, iteration-1, NONEWSIDE, FIRST);
   }

}

void hedgehog(){
   float j;
   icount = 0;vcount = 0;ncount = 0;

   for(j = 0.0; j < 360.0; j+= 90.0)
   createHedgehog(0.0f, 0.0f, 0.0f,  0.0,    j , 0.1f, 14, NEWSIDE, FIRST);
   createHedgehog(0.0f, 0.0f, 0.0f, 90.0, 90.0f, 0.1f, 14, NEWSIDE, FIRST);
   createHedgehog(0.0f, 0.0f, 0.0f,270.0, 90.0f, 0.1f, 14, NEWSIDE, FIRST);

   glNormalPointer(GL_FLOAT, 0, normals);
   glColor4f(1.0f,1.0f,1.0f,1.0f);
   glVertexPointer(3, GL_FLOAT, 0, vertices);
   glPushMatrix();
   glRotatef(70.2, 1.0f, 0.7f, 0.0f);
   glDrawElements(GL_QUADS, icount, GL_UNSIGNED_INT, indices);
   glPopMatrix();
   /* Draw the background */
   vertices[0] = -0.5;
   vertices[1] = -0.5;
   vertices[2] = -0.5;

   indices[0] = 0;

   vertices[3] =  0.5;
   vertices[4] = -0.5;
   vertices[5] = -0.5;

   indices[1] = 1;

   vertices[6] =  0.5;
   vertices[7] =  0.5;
   vertices[8] = -0.5;

   indices[2] = 2;

   vertices[9] = -0.5;
   vertices[10]=  0.5;
   vertices[11]= -0.5;

   indices[3] = 3;

   glDrawElements(GL_QUADS, 4, GL_UNSIGNED_INT, indices);
}

int main(){
   SDL_Event event;
   int end = 0;
   float lightpos[] = {-25.0, 20.0, -13.5};

/* Initialization */
SDL_Init(SDL_INIT_VIDEO);

SDL_SetVideoMode( 1024, 768, 32, SDL_OPENGL    | 
                                 SDL_HWPALETTE | 
                                 SDL_RESIZABLE | 
                                 SDL_HWSURFACE |
                                 SDL_FULLSCREEN);

SDL_ShowCursor(SDL_DISABLE);
glClearColor(0.0f,0.0f,0.0f,0.0f);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();

glEnable(GL_DEPTH_TEST);
glEnable(GL_LIGHTING);
glEnable(GL_LIGHT0);
glEnable(GL_NORMALIZE);
glEnableClientState(GL_VERTEX_ARRAY);
glEnableClientState(GL_NORMAL_ARRAY);
glOrtho(-0.5f,0.5f,-0.5f,0.5f,-1.0f,100.0f);
glLightfv(GL_LIGHT0, GL_POSITION, lightpos);

while(!end){
   /* Event handling */
   while( SDL_PollEvent( &event) ){
      switch(event.type){
         case SDL_KEYDOWN:
            if (event.key.keysym.sym == SDLK_ESCAPE)   end = 1;
            break;
      }
   }

   glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
   glColor4f(1.0f,1.0f,1.0f,1.0f);
   hedgehog();
   SDL_GL_SwapBuffers();
}

/* Quit */
SDL_ShowCursor(SDL_ENABLE);
SDL_Quit();
return(0);
}

