#include "SDL/SDL.h"
#include "GL/gl.h"
//#include <time.h>

enum {
    Yellow = 1,
    Blue = 2,
    Red = 3,
    Orange = 4,
    Green = 5,
    White = 6
};

typedef struct __CCube
{
    void (**_functions)();
    float m_Length;
    float m_Sides[6][3];

} *CCube;

typedef struct __CRCube
{
    void (**_functions)();
    float m_CubeX, m_CubeY, m_CubeZ;
    float m_RotateX[3], m_RotateY[3], m_RotateZ[3];
    CCube *m_Cubes[3][3][3];
} *CRCube;

typedef struct __CRotation
{
    void (**_function)();
    int m_Axis;
    int m_Block;
} *CRotation;

CRCube CRCube_Construct();
CRCube CRCube_Reset(CRCube cube);
CRCube CRCube_SetColor(CRCube cube, char side, int row, int col, int color);
CRCube CRCube_RotateX(CRCube cube, int block, int degrees);
CRCube CRCube_RotateY(CRCube cube, int block, int degrees);
CRCube CRCube_RotateZ(CRCube cube, int block, int degrees);
CRCube CRCube_Rotate(CRCube cube, CRotation rotation, int degrees);
void CRCube_Render(CRCube cube);

CCube CCube_Construct();
CCube CCube_Reset(CCube cube);
CCube CCube_SetColor(CCube cube, int face, int color);
CCube CCube_RotateCW(CCube cube, int axis);
CCube CCube_RotateCCW(CCube cube, int axis);
CCube CCube_RotateColors(CCube cube, int a, int b, int c, int d);
void CCube_CopyColor(float dest[], float src[]);
void CCube_Render(CCube cube);
CRotation CRotation_Construct(int axis, int block);

void _start()
{
    SDL_Event event;
    SDL_Event keyEvent;

    SDL_SetVideoMode(1280,800,0,SDL_OPENGL|SDL_FULLSCREEN);
    SDL_ShowCursor(SDL_DISABLE);

    glShadeModel(GL_SMOOTH);							
    glClearColor(0.8f, 0.8f, 0.8f, 0.5f);					
    glClearDepth(1.0);									
    glEnable(GL_DEPTH_TEST);							
    glDepthFunc(GL_LEQUAL);								
    glHint(GL_PERSPECTIVE_CORRECTION_HINT, GL_NICEST);	

    glViewport(0,0,1280,800);						
    glMatrixMode(GL_PROJECTION);						
    glLoadIdentity();									

    glFrustum(-1.33,1.33,-1,1,1.5,100);
    glMatrixMode( GL_MODELVIEW );
    glLoadIdentity();

    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);	
    glLoadIdentity();									
    glTranslated(0.0,0.0,-7.0);						
    glRotatef(30,1,0,0);
    glRotatef(60,0,1,0);

    CRCube cube = CRCube_Construct();
    CRotation rotations[60];

    srand(100000000); //time(NULL)
    int i, y, lA = 0;
    for(i = 0; i < 60; i++)
    {
	if(checkEsc(keyEvent) == 1) {
	    SDL_Quit();
	    return;        		
	}
        int axis = rand() % 3 + 1;
        int block = rand() % 3;
	if(lA == axis) {
	    i--;
	    continue;      
	}
        rotations[i] = CRotation_Construct(axis, block);
        CRCube_Rotate(cube, rotations[i], 90);
	lA = axis;
    }

    CRCube_Render(cube);
    SDL_GL_SwapBuffers();

    for(i = 0; i < 200; i++) {
        if(checkEsc(keyEvent) == 1) {
	    SDL_Quit();
	    return;        		
	}
        glRotatef(2,0,1,1);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
        glFlush();
        CRCube_Render(cube);
        SDL_GL_SwapBuffers();
	SDL_Delay(20);
    }
    for(i = 60; i > 0; i--)       
    {
        for(y = 0; y < 18; y++)
        {              
        
            if(checkEsc(keyEvent) == 1) {
	        SDL_Quit();
	        return;        		
	    } 
            glRotatef(2,0,1,1);
              
            CRCube_Rotate(cube, rotations[i-1], -5);
            glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
            glFlush();
            CRCube_Render(cube);
            SDL_GL_SwapBuffers();
            SDL_Delay(20);
	}
    }
    for(i = 0; i < 350; i++) {
        if(checkEsc(keyEvent) == 1) {
	    SDL_Quit();
	    return;        		
	}
	        
        glRotatef(2,0,1,1);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
        glFlush();
        CRCube_Render(cube);
	SDL_GL_SwapBuffers();
	SDL_Delay(20);
    }
      

    SDL_Quit();

    asm ( \
      "movl $1,%eax\n" \
      "xor %ebx,%ebx\n" \
      "int $128\n" \
    );


}

CRCube CRCube_Construct() {
    CRCube cube = (CRCube) malloc(sizeof(struct __CRCube));

    cube->m_CubeX = 0;
    cube->m_CubeY = 0;
    cube->m_CubeZ = 0;

    int i = 0;
    for(i = 0; i < 3; i++)
    {
        cube->m_RotateX[i] = 0;
        cube->m_RotateY[i] = 0;
        cube->m_RotateZ[i] = 0;
    }
    int j = 0;
    int k = 0;

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            for(k = 0; k < 3; k++)
            {
                cube->m_Cubes[i][j][k] = CCube_Construct();
            }
        }
    }
    cube = CRCube_Reset(cube);

    return cube;
}

CRCube CRCube_Reset(CRCube cube)
{
    int i = 0;
    int j = 0;
    int k = 0;

    for(i = 0; i < 3; i++)
    {
        for(j = 0; j < 3; j++)
        {
            for(k = 0; k < 3; k++)
            {
                CCube_Reset(cube->m_Cubes[i][j][k]);
            }
        }
    }

    char side;
    int face = 1;
    for(face = 1; face < 7; face++)
    {
        switch (face)
        {
            case 1:
                side = 'T';
                break;
            case 2:
                side = 'F';
                break;
            case 3:
                side = 'R';
                break;
            case 4:
                side = 'L';
                break;
            case 5:
                side = 'B';
                break;
            case 6:
                side = 'D';
                break;
        }
        for (i = 0;i < 3;i++)
        {
            for (j = 0;j < 3;j++)
            {
                cube = CRCube_SetColor(cube, side, i, j, face);
            }
        }
    }
    return cube;
}

CRCube CRCube_SetColor(CRCube cube, char side, int row, int col, int color)
{
    int x = 0;
    int y = 0;
    int z = 0;
    int face = 0;

    switch(side)
    {
        case 'F':
            x = col;
            y = abs(row-2);
            z = 2;
            face = 2;
            break;
        case 'B':
            x = abs(col-2);
            y = abs(row-2);
            z = 0;
            face = 3;
            break;
        case 'T':
            x = col;
            y = 2;
            z = row;
            face = 1;
            break;
        case 'D':

            x = col;
            y = 0;
            z = abs(row-2);
            face = 4;
            break;
        case 'L':

            x = 0;
            y = abs(row-2);
            z = col;
            face = 5;
            break;
        case 'R':

            x = 2;
            y = abs(row-2);
            z = abs(col-2);
            face = 0;
            break;
    }
    cube->m_Cubes[x][y][z] = CCube_SetColor(cube->m_Cubes[x][y][z], face, color);
    return cube;
}

CRCube CRCube_RotateX(CRCube cube, int block, int degrees)
{
    cube->m_RotateX[block] += degrees;
    int i = 0;
    int j = 0;
    int k = 0;

    if (degrees < 0 && cube->m_RotateX[block] == -90)
    {
        cube->m_RotateX[block] = 0;

        CCube tmpcube = cube->m_Cubes[block][0][0];
        cube->m_Cubes[block][0][0] = cube->m_Cubes[block][2][0];
        cube->m_Cubes[block][2][0] = cube->m_Cubes[block][2][2];
        cube->m_Cubes[block][2][2] = cube->m_Cubes[block][0][2];
        cube->m_Cubes[block][0][2] = tmpcube;

        tmpcube = cube->m_Cubes[block][1][0];
        cube->m_Cubes[block][1][0] = cube->m_Cubes[block][2][1];
        cube->m_Cubes[block][2][1] = cube->m_Cubes[block][1][2];
        cube->m_Cubes[block][1][2] = cube->m_Cubes[block][0][1];
        cube->m_Cubes[block][0][1] = tmpcube;

        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
            {
                cube->m_Cubes[block][j][k] = CCube_RotateCCW(cube->m_Cubes[block][j][k], 1);
            }
        }
    }
    else if (degrees > 0 && cube->m_RotateX[block] == 90)
    {
        cube->m_RotateX[block] = 0;

        CCube tmpcube = cube->m_Cubes[block][0][2];
        cube->m_Cubes[block][0][2] = cube->m_Cubes[block][2][2];
        cube->m_Cubes[block][2][2] = cube->m_Cubes[block][2][0];
        cube->m_Cubes[block][2][0] = cube->m_Cubes[block][0][0];
        cube->m_Cubes[block][0][0] = tmpcube;

        tmpcube = cube->m_Cubes[block][0][1];
        cube->m_Cubes[block][0][1] = cube->m_Cubes[block][1][2];
        cube->m_Cubes[block][1][2] = cube->m_Cubes[block][2][1];
        cube->m_Cubes[block][2][1] = cube->m_Cubes[block][1][0];
        cube->m_Cubes[block][1][0] = tmpcube;

        for (j = 0; j < 3; j++)
        {
            for (k = 0; k < 3; k++)
            {
                cube->m_Cubes[block][j][k] = CCube_RotateCW(cube->m_Cubes[block][j][k], 1);
            }
        }
    }

    if((cube->m_RotateX[0] == cube->m_RotateX[1] ||
         cube->m_RotateX[0] == cube->m_RotateX[1]-90 ||
         cube->m_RotateX[0] == cube->m_RotateX[1]+90) &&
        (cube->m_RotateX[1] == cube->m_RotateX[2] ||
         cube->m_RotateX[1] == cube->m_RotateX[2]-90 ||
         cube->m_RotateX[1] == cube->m_RotateX[2]+90))
    {
        cube->m_CubeX += cube->m_RotateX[0];
        cube->m_RotateX[0] = cube->m_RotateX[1] = cube->m_RotateX[2] = 0;
    }

    return cube;

}

CRCube CRCube_RotateY(CRCube cube, int block, int degrees)
{
    cube->m_RotateY[block] += degrees;

    int i = 0;
    int j = 0;
    int k = 0;

   if (degrees < 0 && cube->m_RotateY[block] == -90)
   {
      cube->m_RotateY[block] = 0;

      CCube tmpcube = cube->m_Cubes[0][block][2];
      cube->m_Cubes[0][block][2] = cube->m_Cubes[2][block][2];
      cube->m_Cubes[2][block][2] = cube->m_Cubes[2][block][0];
      cube->m_Cubes[2][block][0] = cube->m_Cubes[0][block][0];
      cube->m_Cubes[0][block][0] = tmpcube;

      tmpcube = cube->m_Cubes[0][block][1];
      cube->m_Cubes[0][block][1] = cube->m_Cubes[1][block][2];
      cube->m_Cubes[1][block][2] = cube->m_Cubes[2][block][1];
      cube->m_Cubes[2][block][1] = cube->m_Cubes[1][block][0];
      cube->m_Cubes[1][block][0] = tmpcube;

      for(i = 0; i < 3; i++)
      {
         for(k = 0; k < 3; k++)
         {
             cube->m_Cubes[i][block][k] = CCube_RotateCCW(cube->m_Cubes[i][block][k], 2);
         }
      }
   }
   else if (degrees > 0 && cube->m_RotateY[block] == 90)
   {
      cube->m_RotateY[block] = 0;

      CCube tmpcube = cube->m_Cubes[0][block][0];
      cube->m_Cubes[0][block][0] = cube->m_Cubes[2][block][0];
      cube->m_Cubes[2][block][0] = cube->m_Cubes[2][block][2];
      cube->m_Cubes[2][block][2] = cube->m_Cubes[0][block][2];
      cube->m_Cubes[0][block][2] = tmpcube;

      tmpcube = cube->m_Cubes[1][block][0];
      cube->m_Cubes[1][block][0] = cube->m_Cubes[2][block][1];
      cube->m_Cubes[2][block][1] = cube->m_Cubes[1][block][2];
      cube->m_Cubes[1][block][2] = cube->m_Cubes[0][block][1];
      cube->m_Cubes[0][block][1] = tmpcube;

      for(i = 0; i < 3; i++)
      {
         for(k = 0; k < 3; k++)
         {
            cube->m_Cubes[i][block][k] = CCube_RotateCW(cube->m_Cubes[i][block][k], 2);
         }
      }
   }

   if ( (cube->m_RotateY[0] == cube->m_RotateY[1] ||
         cube->m_RotateY[0] == cube->m_RotateY[1]-90 ||
         cube->m_RotateY[0] == cube->m_RotateY[1]+90) &&
        (cube->m_RotateY[1] == cube->m_RotateY[2] ||
         cube->m_RotateY[1] == cube->m_RotateY[2]-90 ||
         cube->m_RotateY[1] == cube->m_RotateY[2]+90))
   {
         cube->m_CubeY += cube->m_RotateY[0];
         cube->m_RotateY[0] = cube->m_RotateY[1] = cube->m_RotateY[2] = 0;
   }
   return cube;
}


CRCube CRCube_RotateZ(CRCube cube, int block, int degrees)
{
    cube->m_RotateZ[block] += degrees;
    int i = 0;
    int j = 0;
    int k = 0;

   if (degrees < 0 && cube->m_RotateZ[block] == -90)
   {
      cube->m_RotateZ[block] = 0;

      CCube tmpcube = cube->m_Cubes[0][0][block];
      cube->m_Cubes[0][0][block]   = cube->m_Cubes[2][0][block];
      cube->m_Cubes[2][0][block]   = cube->m_Cubes[2][2][block];
      cube->m_Cubes[2][2][block]   = cube->m_Cubes[0][2][block];
      cube->m_Cubes[0][2][block]   = tmpcube;

      tmpcube            = cube->m_Cubes[1][0][block];
      cube->m_Cubes[1][0][block] = cube->m_Cubes[2][1][block];
      cube->m_Cubes[2][1][block] = cube->m_Cubes[1][2][block];
      cube->m_Cubes[1][2][block] = cube->m_Cubes[0][1][block];
      cube->m_Cubes[0][1][block] = tmpcube;

      for(i = 0; i < 3; i++)
      {
         for(j = 0; j < 3; j++)
         {
             cube->m_Cubes[i][j][block] = CCube_RotateCCW(cube->m_Cubes[i][j][block], 3);
         }
      }
   }
   else if (degrees > 0 && cube->m_RotateZ[block] == 90)
   {
      cube->m_RotateZ[block] = 0;

      CCube tmpcube = cube->m_Cubes[0][2][block];
      cube->m_Cubes[0][2][block] = cube->m_Cubes[2][2][block];
      cube->m_Cubes[2][2][block] = cube->m_Cubes[2][0][block];
      cube->m_Cubes[2][0][block] = cube->m_Cubes[0][0][block];
      cube->m_Cubes[0][0][block] = tmpcube;

      tmpcube = cube->m_Cubes[0][1][block];
      cube->m_Cubes[0][1][block] = cube->m_Cubes[1][2][block];
      cube->m_Cubes[1][2][block] = cube->m_Cubes[2][1][block];
      cube->m_Cubes[2][1][block] = cube->m_Cubes[1][0][block];
      cube->m_Cubes[1][0][block] = tmpcube;

      for(i = 0; i < 3; i++)
      {
         for(j = 0; j < 3; j++)
         {
            cube->m_Cubes[i][j][block] = CCube_RotateCW(cube->m_Cubes[i][j][block], 3);
         }
      }
   }

   if ( (cube->m_RotateZ[0] == cube->m_RotateZ[1] ||
         cube->m_RotateZ[0] == cube->m_RotateZ[1]-90 ||
         cube->m_RotateZ[0] == cube->m_RotateZ[1]+90) &&
        (cube->m_RotateZ[1] == cube->m_RotateZ[2] ||
         cube->m_RotateZ[1] == cube->m_RotateZ[2]-90 ||
         cube->m_RotateZ[1] == cube->m_RotateZ[2]+90))
   {
      cube->m_CubeZ += cube->m_RotateZ[0];
      cube->m_RotateZ[0] = cube->m_RotateZ[1] = cube->m_RotateZ[2] = 0;
   }
   return cube;
}

CRCube CRCube_Rotate(CRCube cube, CRotation rotation, int degrees)
{
    switch(rotation->m_Axis) {
        case 1:
            CRCube_RotateX(cube, rotation->m_Block, degrees);
        break;
        case 2:
            CRCube_RotateY(cube, rotation->m_Block, degrees);
        break;
        case 3:
            CRCube_RotateZ(cube, rotation->m_Block, degrees);
        break;
    }
    return cube;
}

void CRCube_Render(CRCube cube)
{

    glRotatef(cube->m_CubeX, 1, 0, 0);
    glRotatef(cube->m_CubeY, 0, 1, 0);
    glRotatef(cube->m_CubeZ, 0, 0, 1);

    int i = 0;
    int j = 0;
    int k = 0;

    for(i = 0; i < 3; i++)
    {
        glRotatef(cube->m_RotateX[i], 1, 0, 0);
        for(j = 0; j < 3; j++)
        {
            glRotatef(cube->m_RotateY[j], 0, 1, 0);
            for(k = 0; k < 3; k++)
            {
                glRotatef(cube->m_RotateZ[k], 0, 0, 1);
                glTranslatef(i-1.0f, j-1.0f, k-1.0f);
                CCube_Render(cube->m_Cubes[i][j][k]);
                glTranslatef(1.0f-i, 1.0f-j, 1.0f-k);

                glRotatef(-cube->m_RotateZ[k], 0, 0, 1);
            }
            glRotatef(-cube->m_RotateY[j], 0, 1, 0);
        }
        glRotatef(-cube->m_RotateX[i], 1, 0, 0);
    }

    glRotatef(-cube->m_CubeZ, 0, 0, 1);
    glRotatef(-cube->m_CubeY, 0, 1, 0);
    glRotatef(-cube->m_CubeX, 1, 0, 0);

}

CCube CCube_Construct()
{
    CCube cube = (CCube) malloc(sizeof(struct __CCube));

    cube->m_Length = 0.8;
    return cube;
}

CCube CCube_Reset(CCube cube)
{
    int i = 0;
    for(i = 0; i < 6;i++)
    {
        cube->m_Sides[i][0] = cube->m_Sides[i][1] = cube->m_Sides[i][2] = 0.25;
    }
    return cube;
}

CCube CCube_SetColor(CCube cube, int face, int color)
{
    switch(color)
    {
        case Yellow:
            cube->m_Sides[face][0] = 1;
            cube->m_Sides[face][1] = 1;
            cube->m_Sides[face][2] = 0;
            break;
        case Blue:
            cube->m_Sides[face][0] = 0;
            cube->m_Sides[face][1] = 0;
            cube->m_Sides[face][2] = 1;
            break;
        case Red:
            cube->m_Sides[face][0] = 1;
            cube->m_Sides[face][1] = 0;
            cube->m_Sides[face][2] = 0;
            break;
        case Orange:
            cube->m_Sides[face][0] = 1;
            cube->m_Sides[face][1] = 0.5;
            cube->m_Sides[face][2] = 0;
            break;
        case Green:
            cube->m_Sides[face][0] = 0;
            cube->m_Sides[face][1] = 1;
            cube->m_Sides[face][2] = 0;
            break;
        case White:
            cube->m_Sides[face][0] = 1;
            cube->m_Sides[face][1] = 1;
            cube->m_Sides[face][2] = 1;
            break;
    }
    return cube;
}

CCube CCube_RotateCW(CCube cube, int Axis)
{
    switch (Axis)
    {
        case 1:
            cube = CCube_RotateColors(cube, 3, 4, 2, 1);
            break;
        case 2:
            cube = CCube_RotateColors(cube, 0, 2, 5, 3);
            break;
        case 3:
            cube = CCube_RotateColors(cube, 0, 4, 5, 1);
            break;
    }
    return cube;
}

CCube CCube_RotateCCW(CCube cube, int Axis)
{
    switch (Axis)
    {
        case 1:
            cube = CCube_RotateColors(cube, 1, 2, 4, 3);
            break;
        case 2:
            cube = CCube_RotateColors(cube, 3, 5, 2, 0);
            break;
        case 3:
            cube = CCube_RotateColors(cube, 1, 5, 4, 0);
            break;
    }
    return cube;
}

CCube CCube_RotateColors(CCube cube, int a, int b, int c, int d)
{
    float temp[3];
    CCube_CopyColor(temp, cube->m_Sides[a]);
    CCube_CopyColor(cube->m_Sides[a], cube->m_Sides[b]);
    CCube_CopyColor(cube->m_Sides[b], cube->m_Sides[c]);
    CCube_CopyColor(cube->m_Sides[c], cube->m_Sides[d]);
    CCube_CopyColor(cube->m_Sides[d], temp);

    return cube;
}

void CCube_CopyColor(float Dest[], float Src[]) {
    Dest[0] = Src[0];
    Dest[1] = Src[1];
    Dest[2] = Src[2];
}

void CCube_Render(CCube cube)
{
    glPushMatrix();

    glBegin(GL_QUADS);

    glColor3fv(cube->m_Sides[0]);
    glVertex3f(cube->m_Length/1.80 , cube->m_Length/1.80, cube->m_Length/1.80);
    glVertex3f(cube->m_Length/1.80 , cube->m_Length/1.80, -cube->m_Length/1.80);
    glVertex3f(cube->m_Length/1.80 , -cube->m_Length/1.80, -cube->m_Length/1.80);
    glVertex3f(cube->m_Length/1.80 , -cube->m_Length/1.80, cube->m_Length/1.80);

    glColor3fv(cube->m_Sides[1]);
    glVertex3f(-cube->m_Length/1.80,  cube->m_Length/1.80 , -cube->m_Length/1.80);
    glVertex3f(-cube->m_Length/1.80,  cube->m_Length/1.80 ,  cube->m_Length/1.80);
    glVertex3f( cube->m_Length/1.80,  cube->m_Length/1.80 ,  cube->m_Length/1.80);
    glVertex3f( cube->m_Length/1.80,  cube->m_Length/1.80 , -cube->m_Length/1.80);

    glColor3fv(cube->m_Sides[2]);
    glVertex3f( cube->m_Length/1.80,  cube->m_Length/1.80,  cube->m_Length/1.80 );
    glVertex3f(-cube->m_Length/1.80,  cube->m_Length/1.80,  cube->m_Length/1.80 );
    glVertex3f(-cube->m_Length/1.80, -cube->m_Length/1.80,  cube->m_Length/1.80 );
    glVertex3f( cube->m_Length/1.80, -cube->m_Length/1.80,  cube->m_Length/1.80 );

    glColor3fv(cube->m_Sides[3]);
    glVertex3f( cube->m_Length/1.80,  cube->m_Length/1.80, -cube->m_Length/1.80 );
    glVertex3f(-cube->m_Length/1.80,  cube->m_Length/1.80, -cube->m_Length/1.80 );
    glVertex3f(-cube->m_Length/1.80, -cube->m_Length/1.80, -cube->m_Length/1.80 );
    glVertex3f( cube->m_Length/1.80, -cube->m_Length/1.80, -cube->m_Length/1.80 );

    glColor3fv(cube->m_Sides[4]);
    glVertex3f(-cube->m_Length/1.80, -cube->m_Length/1.80 , -cube->m_Length/1.80);
    glVertex3f(-cube->m_Length/1.80, -cube->m_Length/1.80 ,  cube->m_Length/1.80);
    glVertex3f( cube->m_Length/1.80, -cube->m_Length/1.80 ,  cube->m_Length/1.80);
    glVertex3f( cube->m_Length/1.80, -cube->m_Length /1.80, -cube->m_Length/1.80);

    glColor3fv(cube->m_Sides[5]);
    glVertex3f(-cube->m_Length/1.80 ,  cube->m_Length/1.80,  cube->m_Length/1.80);
    glVertex3f(-cube->m_Length/1.80 ,  cube->m_Length/1.80, -cube->m_Length/1.80);
    glVertex3f(-cube->m_Length/1.80 , -cube->m_Length/1.80, -cube->m_Length/1.80);
    glVertex3f(-cube->m_Length/1.80 , -cube->m_Length/1.80,  cube->m_Length/1.80);

    glEnd();

    glPopMatrix();

}

CRotation CRotation_Construct(int axis, int block)
{
    CRotation rotation = (CRotation) malloc(sizeof(struct __CRotation));
    rotation->m_Axis = axis;
    rotation->m_Block = block;

    return rotation;
}

int checkEsc(SDL_Event keyEvent) {
    while(SDL_PollEvent(&keyEvent))
    {
        switch(keyEvent.type)
	{
	    case SDL_KEYDOWN:
		switch(keyEvent.key.keysym.sym)
		{
		    case SDLK_ESCAPE:
			return 1;
		    break;
		}
	    break;
	}
    }
    return 0;
}



