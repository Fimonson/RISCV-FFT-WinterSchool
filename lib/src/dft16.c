#include "dft.h"
extern void dft16Fwd(const cfloat32_t *pSrc, cfloat32_t *pDst)
{
    cfloat32_t tmpDst[16];
    cfloat32_t tmpDst4[4];
    tmpDst4[0].re = pSrc[0].re + pSrc[8].re;
    tmpDst4[0].im = pSrc[0].im + pSrc[8].im;
    tmpDst4[1].re = pSrc[0].re - pSrc[8].re;
    tmpDst4[1].im = pSrc[0].im - pSrc[8].im;
    tmpDst4[2].re = pSrc[4].re + pSrc[12].re;
    tmpDst4[2].im = pSrc[4].im + pSrc[12].im;
    tmpDst4[3].re = pSrc[4].re - pSrc[12].re;
    tmpDst4[3].im = pSrc[4].im - pSrc[12].im;
    tmpDst[0].re = tmpDst4[0].re + tmpDst4[2].re;
    tmpDst[0].im = tmpDst4[0].im + tmpDst4[2].im;
    tmpDst[1].re = tmpDst4[1].re + tmpDst4[3].im;
    tmpDst[1].im = tmpDst4[1].im - tmpDst4[3].re;
    tmpDst[2].re = tmpDst4[0].re - tmpDst4[2].re;
    tmpDst[2].im = tmpDst4[0].im - tmpDst4[2].im;
    tmpDst[3].re = tmpDst4[1].re - tmpDst4[3].im;
    tmpDst[3].im = tmpDst4[1].im + tmpDst4[3].re;
    tmpDst4[0].re = pSrc[1].re + pSrc[9].re;
    tmpDst4[0].im = pSrc[1].im + pSrc[9].im;
    tmpDst4[1].re = pSrc[1].re - pSrc[9].re;
    tmpDst4[1].im = pSrc[1].im - pSrc[9].im;
    tmpDst4[2].re = pSrc[5].re + pSrc[13].re;
    tmpDst4[2].im = pSrc[5].im + pSrc[13].im;
    tmpDst4[3].re = pSrc[5].re - pSrc[13].re;
    tmpDst4[3].im = pSrc[5].im - pSrc[13].im;
    tmpDst[4].re = tmpDst4[0].re + tmpDst4[2].re;
    tmpDst[4].im = tmpDst4[0].im + tmpDst4[2].im;
    tmpDst[5].re = tmpDst4[1].re + tmpDst4[3].im;
    tmpDst[5].im = tmpDst4[1].im - tmpDst4[3].re;
    tmpDst[6].re = tmpDst4[0].re - tmpDst4[2].re;
    tmpDst[6].im = tmpDst4[0].im - tmpDst4[2].im;
    tmpDst[7].re = tmpDst4[1].re - tmpDst4[3].im;
    tmpDst[7].im = tmpDst4[1].im + tmpDst4[3].re;
   
    tmpDst4[0].re = pSrc[2].re + pSrc[10].re;
    tmpDst4[0].im = pSrc[2].im + pSrc[10].im;
    tmpDst4[1].re = pSrc[2].re - pSrc[10].re;
    tmpDst4[1].im = pSrc[2].im - pSrc[10].im;
    tmpDst4[2].re = pSrc[6].re + pSrc[14].re;
    tmpDst4[2].im = pSrc[6].im + pSrc[14].im;
    tmpDst4[3].re = pSrc[6].re - pSrc[14].re;
    tmpDst4[3].im = pSrc[6].im - pSrc[14].im;
    tmpDst[8].re = tmpDst4[0].re + tmpDst4[2].re;
    tmpDst[8].im = tmpDst4[0].im + tmpDst4[2].im;
    tmpDst[9].re = tmpDst4[1].re + tmpDst4[3].im;
    tmpDst[9].im = tmpDst4[1].im - tmpDst4[3].re;
    tmpDst[10].re = tmpDst4[0].re - tmpDst4[2].re;
    tmpDst[10].im = tmpDst4[0].im - tmpDst4[2].im;
    tmpDst[11].re = tmpDst4[1].re - tmpDst4[3].im;
    tmpDst[11].im = tmpDst4[1].im + tmpDst4[3].re;
    
    tmpDst4[0].re = pSrc[3].re + pSrc[11].re;
    tmpDst4[0].im = pSrc[3].im + pSrc[11].im;
    tmpDst4[1].re = pSrc[3].re - pSrc[11].re;
    tmpDst4[1].im = pSrc[3].im - pSrc[11].im;
    tmpDst4[2].re = pSrc[7].re + pSrc[15].re;
    tmpDst4[2].im = pSrc[7].im + pSrc[15].im;
    tmpDst4[3].re = pSrc[7].re - pSrc[15].re;
    tmpDst4[3].im = pSrc[7].im - pSrc[15].im;
    tmpDst[12].re = tmpDst4[0].re + tmpDst4[2].re;
    tmpDst[12].im = tmpDst4[0].im + tmpDst4[2].im;
    tmpDst[13].re = tmpDst4[1].re + tmpDst4[3].im;
    tmpDst[13].im = tmpDst4[1].im - tmpDst4[3].re;
    tmpDst[14].re = tmpDst4[0].re - tmpDst4[2].re;
    tmpDst[14].im = tmpDst4[0].im - tmpDst4[2].im;
    tmpDst[15].re = tmpDst4[1].re - tmpDst4[3].im;
    tmpDst[15].im = tmpDst4[1].im + tmpDst4[3].re;

    float n = 0.923880;
    float t = 0.382683;
    float s = 0.707107;
    float re = tmpDst[5].re * n + tmpDst[5].im * t;
    tmpDst[5].im = tmpDst[5].im * n - tmpDst[5].re * t;
    tmpDst[5].re = re;

    float mul1 = tmpDst[6].re * s;
    float mul2 = tmpDst[6].im * s;
    tmpDst[6].im = mul2 - mul1;
    tmpDst[6].re = mul1 + mul2;

    re = tmpDst[7].re * t + tmpDst[7].im * n;
    tmpDst[7].im = tmpDst[7].im * t - tmpDst[7].re * n;
    tmpDst[7].re = re;

    mul1 = tmpDst[9].re * s;
    mul2 = tmpDst[9].im * s;
    tmpDst[9].im = mul2 - mul1;
    tmpDst[9].re = mul1 + mul2;

    mul1 = tmpDst[11].re * s;
    mul2 = tmpDst[11].im * s;
    tmpDst[11].im  = -mul2 - mul1;
    tmpDst[11].re = mul2 - mul1;

    re = tmpDst[13].re * t + tmpDst[13].im * n;
    tmpDst[13].im = tmpDst[13].im * t - tmpDst[13].re * n;
    tmpDst[13].re = re;

    mul1 = tmpDst[14].re * -s;
    mul2 = tmpDst[14].im * -s;
    tmpDst[14].im = mul2 + mul1;
    tmpDst[14].re = mul1 - mul2;

    re = tmpDst[15].re * -n - tmpDst[15].im * t;
    tmpDst[15].im = tmpDst[15].im * -n + tmpDst[15].re * t;
    tmpDst[15].re = re;

    tmpDst4[0].re = tmpDst[0].re + tmpDst[8].re;
    tmpDst4[0].im = tmpDst[0].im + tmpDst[8].im;
    tmpDst4[1].re = tmpDst[0].re - tmpDst[8].re;
    tmpDst4[1].im = tmpDst[0].im - tmpDst[8].im;
    tmpDst4[2].re = tmpDst[4].re + tmpDst[12].re;
    tmpDst4[2].im = tmpDst[4].im + tmpDst[12].im;
    tmpDst4[3].re = tmpDst[4].re - tmpDst[12].re;
    tmpDst4[3].im = tmpDst[4].im - tmpDst[12].im;
    pDst[0].re = tmpDst4[0].re + tmpDst4[2].re;
    pDst[0].im = tmpDst4[0].im + tmpDst4[2].im;
    pDst[4].re = tmpDst4[1].re + tmpDst4[3].im;
    pDst[4].im = tmpDst4[1].im - tmpDst4[3].re;
    pDst[8].re = tmpDst4[0].re - tmpDst4[2].re;
    pDst[8].im = tmpDst4[0].im - tmpDst4[2].im;
    pDst[12].re = tmpDst4[1].re - tmpDst4[3].im;
    pDst[12].im = tmpDst4[1].im + tmpDst4[3].re;
    
    tmpDst4[0].re = tmpDst[1].re + tmpDst[9].re;
    tmpDst4[0].im = tmpDst[1].im + tmpDst[9].im;
    tmpDst4[1].re = tmpDst[1].re - tmpDst[9].re;
    tmpDst4[1].im = tmpDst[1].im - tmpDst[9].im;
    tmpDst4[2].re = tmpDst[5].re + tmpDst[13].re;
    tmpDst4[2].im = tmpDst[5].im + tmpDst[13].im;
    tmpDst4[3].re = tmpDst[5].re - tmpDst[13].re;
    tmpDst4[3].im = tmpDst[5].im - tmpDst[13].im;
    pDst[1].re = tmpDst4[0].re + tmpDst4[2].re;
    pDst[1].im = tmpDst4[0].im + tmpDst4[2].im;
    pDst[5].re = tmpDst4[1].re + tmpDst4[3].im;
    pDst[5].im = tmpDst4[1].im - tmpDst4[3].re;
    pDst[9].re = tmpDst4[0].re - tmpDst4[2].re;
    pDst[9].im = tmpDst4[0].im - tmpDst4[2].im;
    pDst[13].re = tmpDst4[1].re - tmpDst4[3].im;
    pDst[13].im = tmpDst4[1].im + tmpDst4[3].re;
    
    tmpDst4[0].re = tmpDst[2].re + tmpDst[10].im;
    tmpDst4[0].im = tmpDst[2].im - tmpDst[10].re;
    tmpDst4[1].re = tmpDst[2].re - tmpDst[10].im;
    tmpDst4[1].im = tmpDst[2].im + tmpDst[10].re;
    tmpDst4[2].re = tmpDst[6].re + tmpDst[14].re;
    tmpDst4[2].im = tmpDst[6].im + tmpDst[14].im;
    tmpDst4[3].re = tmpDst[6].re - tmpDst[14].re;
    tmpDst4[3].im = tmpDst[6].im - tmpDst[14].im;
    pDst[2].re = tmpDst4[0].re + tmpDst4[2].re;
    pDst[2].im = tmpDst4[0].im + tmpDst4[2].im;
    pDst[6].re = tmpDst4[1].re + tmpDst4[3].im;
    pDst[6].im = tmpDst4[1].im - tmpDst4[3].re;
    pDst[10].re = tmpDst4[0].re - tmpDst4[2].re;
    pDst[10].im = tmpDst4[0].im - tmpDst4[2].im;
    pDst[14].re = tmpDst4[1].re - tmpDst4[3].im;
    pDst[14].im = tmpDst4[1].im + tmpDst4[3].re;
   
    tmpDst4[0].re = tmpDst[3].re + tmpDst[11].re;
    tmpDst4[0].im = tmpDst[3].im + tmpDst[11].im;
    tmpDst4[1].re = tmpDst[3].re - tmpDst[11].re;
    tmpDst4[1].im = tmpDst[3].im - tmpDst[11].im;
    tmpDst4[2].re = tmpDst[7].re + tmpDst[15].re;
    tmpDst4[2].im = tmpDst[7].im + tmpDst[15].im;
    tmpDst4[3].re = tmpDst[7].re - tmpDst[15].re;
    tmpDst4[3].im = tmpDst[7].im - tmpDst[15].im;
    pDst[3].re = tmpDst4[0].re + tmpDst4[2].re;
    pDst[3].im = tmpDst4[0].im + tmpDst4[2].im;
    pDst[7].re = tmpDst4[1].re + tmpDst4[3].im;
    pDst[7].im = tmpDst4[1].im - tmpDst4[3].re;
    pDst[11].re = tmpDst4[0].re - tmpDst4[2].re;
    pDst[11].im = tmpDst4[0].im - tmpDst4[2].im;
    pDst[15].re = tmpDst4[1].re - tmpDst4[3].im;
    pDst[15].im = tmpDst4[1].im + tmpDst4[3].re; 
}