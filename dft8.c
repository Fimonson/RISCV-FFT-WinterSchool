#include "dft.h"

extern void dft8Fwd(const cfloat32_t *pSrc, cfloat32_t *pDst)
{
    cfloat32_t tmpDst[8];
    cfloat32_t tmpDst4[4];
    
    tmpDst4[0].re = pSrc[0].re + pSrc[4].re;
    tmpDst4[0].im = pSrc[0].im + pSrc[4].im;
    tmpDst4[1].re = pSrc[0].re - pSrc[4].re;
    tmpDst4[1].im = pSrc[0].im - pSrc[4].im;
    tmpDst4[2].re = pSrc[2].re + pSrc[6].re;
    tmpDst4[2].im = pSrc[2].im + pSrc[6].im;
    tmpDst4[3].re = pSrc[2].re - pSrc[6].re;
    tmpDst4[3].im = pSrc[2].im - pSrc[6].im;
    tmpDst[0].re = tmpDst4[0].re + tmpDst4[2].re;
    tmpDst[0].im = tmpDst4[0].im + tmpDst4[2].im;
    tmpDst[1].re = tmpDst4[1].re + tmpDst4[3].im;
    tmpDst[1].im = tmpDst4[1].im - tmpDst4[3].re;
    tmpDst[2].re = tmpDst4[0].re - tmpDst4[2].re;
    tmpDst[2].im = tmpDst4[0].im - tmpDst4[2].im;
    tmpDst[3].re = tmpDst4[1].re - tmpDst4[3].im;
    tmpDst[3].im = tmpDst4[1].im + tmpDst4[3].re;

    tmpDst4[0].re = pSrc[1].re + pSrc[5].re;
    tmpDst4[0].im = pSrc[1].im + pSrc[5].im;
    tmpDst4[1].re = pSrc[1].re - pSrc[5].re;
    tmpDst4[1].im = pSrc[1].im - pSrc[5].im;
    tmpDst4[2].re = pSrc[3].re + pSrc[7].re;
    tmpDst4[2].im = pSrc[3].im + pSrc[7].im;
    tmpDst4[3].re = pSrc[3].re - pSrc[7].re;
    tmpDst4[3].im = pSrc[3].im - pSrc[7].im;
    tmpDst[4].re = tmpDst4[0].re + tmpDst4[2].re;
    tmpDst[4].im = tmpDst4[0].im + tmpDst4[2].im;
    tmpDst[5].re = tmpDst4[1].re + tmpDst4[3].im;
    tmpDst[5].im = tmpDst4[1].im - tmpDst4[3].re;
    tmpDst[6].re = tmpDst4[0].re - tmpDst4[2].re;
    tmpDst[6].im = tmpDst4[0].im - tmpDst4[2].im;
    tmpDst[7].re = tmpDst4[1].re - tmpDst4[3].im;
    tmpDst[7].im = tmpDst4[1].im + tmpDst4[3].re;

    float s = 0.707107;

    float mul1 = tmpDst[5].re * s;
    float mul2 = tmpDst[5].im * s;
    tmpDst[5].im = mul2 - mul1;
    tmpDst[5].re = mul1 + mul2;

    mul1 = -tmpDst[7].re * s;
    mul2 = -tmpDst[7].im * s;
    tmpDst[7].im = mul2 + mul1;
    tmpDst[7].re = mul1 - mul2;

    pDst[0].re = tmpDst[0].re + tmpDst[4].re;
    pDst[0].im = tmpDst[0].im + tmpDst[4].im;   
    pDst[4].re = tmpDst[0].re - tmpDst[4].re;
    pDst[4].im = tmpDst[0].im - tmpDst[4].im;
 
    pDst[1].re = tmpDst[1].re + tmpDst[5].re;
    pDst[1].im = tmpDst[1].im + tmpDst[5].im;
    pDst[5].re = tmpDst[1].re - tmpDst[5].re;
    pDst[5].im = tmpDst[1].im - tmpDst[5].im;

    pDst[2].re = tmpDst[2].re + tmpDst[6].im;
    pDst[2].im = tmpDst[2].im - tmpDst[6].re;
    pDst[6].re = tmpDst[2].re - tmpDst[6].im;
    pDst[6].im = tmpDst[2].im + tmpDst[6].re; 
    
    pDst[3].re = tmpDst[3].re + tmpDst[7].re;
    pDst[3].im = tmpDst[3].im + tmpDst[7].im;
    pDst[7].re = tmpDst[3].re - tmpDst[7].re;
    pDst[7].im = tmpDst[3].im - tmpDst[7].im;
}
