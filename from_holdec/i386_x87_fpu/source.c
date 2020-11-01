#include <stdio.h>
#include <math.h>
#include <assert.h>

extern int F2XM1(double x);
extern int FABS(double x);
extern int FADD(double x);
extern int FBSTP();
extern int FBLD();
extern int FCHS(double x);
extern int FCMOV(int n);
extern int FCOM(double x);
extern int FCOMI(double x);
extern int FCOS(double x);
extern int FDIV(double x);
extern int FDIVR(double x);
extern int FILD();
extern int FIST(double x);
extern int FLD();
extern int FLDC();
extern int FMUL(double x);
extern int FPATAN(double x);
extern int FPREM(double x);
extern int FPTAN(double x);
extern int FRNDINT(double x);
extern int FSCALE(double x);
extern int FSIN(double x);
extern int FSINCOS(double x);
extern int FSQRT(double x);
extern int FST(double x);
extern int FSUB(double x);
extern int FTST(double x);
extern int FXAM(double x);
extern int FXCH(double x);
extern int FXTRACT(double x);
extern int FYL2X(double x);
extern int FYL2XP1(double x);

extern int NOT_EXECUTED();

extern int TOP();

#define CHECK	{int top=TOP(); if(top!=0){printf("top=%d\n",top);assert(top==0);}}

int main(int argc, char *argv[])
{
    F2XM1(0.5);
    CHECK;
    printf("\n");

    FABS(0.5);
    CHECK;
    printf("\n");

    FADD(0.5);
    CHECK;
    printf("\n");

    FBSTP();
    CHECK;
    printf("\n");

    FBLD();
    CHECK;
    printf("\n");

    FCHS(-0.5);
    CHECK;
    printf("\n");

    FCMOV(0);
    CHECK;
    FCMOV(-1);
    CHECK;
    printf("\n");

    FCOM(0.5);
    CHECK;
    printf("\n");

    FCOMI(0.5);
    CHECK;
    printf("\n");

    FCOS(0.5);
    CHECK;
    printf("\n");

    FDIV(0.5);
    CHECK;
    printf("\n");

    FDIVR(0.5);
    CHECK;
    printf("\n");

    FILD();
    CHECK;
    printf("\n");

    FIST(12.345);
    CHECK;
    printf("\n");

    FLD();
    CHECK;
    printf("\n");

    FLDC();
    CHECK;
    printf("\n");

    FMUL(0.5);
    CHECK;
    printf("\n");

    FPATAN(0.5);
    CHECK;
    printf("\n");

    FPREM(0.5+1234567*2*M_PI);
    CHECK;
    printf("\n");

    FPTAN(0.5);
    CHECK;
    printf("\n");

    FRNDINT(0.8);
    CHECK;
    printf("\n");

    FSCALE(2.8);
    CHECK;
    printf("\n");

    FSIN(0.5);
    CHECK;
    printf("\n");
    
    FSINCOS(0.5);
    CHECK;
    printf("\n");

    FSQRT(2.0);
    CHECK;
    printf("\n");

    FST(0.5);
    CHECK;
    printf("\n");

    FSUB(0.8);
    CHECK;
    printf("\n");

    FTST(-42);
    CHECK;
    printf("\n"); 

    FXAM(0.5);
    CHECK;
    printf("\n"); 

    FXCH(0.5);
    CHECK;
    printf("\n"); 

    FXTRACT(0.5);
    CHECK;
    printf("\n"); 

    FYL2X(256.0);
    CHECK;
    printf("\n"); 

    FYL2XP1(255.0);
    CHECK;
    printf("\n"); 
    
    if(argc==42) {
        NOT_EXECUTED();
    }
}
