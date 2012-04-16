/*
    c is possible
    y0bi / wAMMA
    10.11.2006
    
    To compile you need turbo c 2.01 and c0t.asm (google it). Oh, tasm too. 
    Tweaking of commandline options is necessary to get it down to 245 bytes.

    Why did I code this? The effect is crap, I know, but the point is to
    demonstrate that "decent" 256b intros are possible in nearly pure c.
    
    It also shows how futile writing 256b intros is. Even though I might
    spend hours upon hours optimizing my intros to about half the size
    they would take when written in c, people will eventually judge them
    based on the colors I used. I'd rather concentrate on coding something
    cool, than something not-nearly-as-cool-but-almost in 256b.
*/


main() 
{
    unsigned char heights[320];
    int x,y,t,d,d2,x2,c,h,y2;
    char far *Virt;
    
    Virt=0xa0000000;
    
    asm mov ax,13h
    asm int 10h
    
    while(1)
    {
        for(y=199;y>0;y--)
        {
            d=10000/y;
            d2=((d+t)&31)-16;
            for(x=0;x<320;x++)
            {
                if (y==199) heights[x]=199;
                
                x2=(((((x-160)*d)>>8))&31)-16;
                c=(d2*d2+x2*x2)>>1;
                h=y+(c<<4)/d;
                if (h<heights[x])
                {
                    c=c-(d>>2);
                    if (c<0) c=0;
                    c=(c>>4)+16;
                    
                    for(y2=h;y2<heights[x];y2++)
                        Virt[x+y2*320]=c;
                    heights[x]=h;
                }
            }
        }
        t++;
    }
}
