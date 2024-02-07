#include "dft.h"
void dft32Fwd(const cfloat32_t *pSrc, cfloat32_t *pDst)
{
    //cfloat32_t tmpSrc[32];
    cfloat32_t tmpDst[32];
  
    // dft2Fwd(&tmpSrc[0], &tmpDst[0]);
    tmpDst[1].re = pSrc[0].re - pSrc[16].re;
    tmpDst[1].im = pSrc[0].im - pSrc[16].im;
    tmpDst[0].re = pSrc[0].re + pSrc[16].re;
    tmpDst[0].im = pSrc[0].im + pSrc[16].im;
    // dft2Fwd(&tmpSrc[2], &tmpDst[2]);
    tmpDst[3].re = pSrc[1].re - pSrc[17].re;
    tmpDst[3].im = pSrc[1].im - pSrc[17].im;
    tmpDst[2].re = pSrc[1].re + pSrc[17].re;
    tmpDst[2].im = pSrc[1].im + pSrc[17].im;
    // dft2Fwd(&tmpSrc[4], &tmpDst[4]);
    tmpDst[5].re = pSrc[2].re - pSrc[18].re;
    tmpDst[5].im = pSrc[2].im - pSrc[18].im;
    tmpDst[4].re = pSrc[2].re + pSrc[18].re;
    tmpDst[4].im = pSrc[2].im + pSrc[18].im;
    // dft2Fwd(&tmpSrc[6], &tmpDst[6]);
    tmpDst[7].re = pSrc[3].re - pSrc[19].re;
    tmpDst[7].im = pSrc[3].im - pSrc[19].im;
    tmpDst[6].re = pSrc[3].re + pSrc[19].re;
    tmpDst[6].im = pSrc[3].im + pSrc[19].im;
    // dft2Fwd(&tmpSrc[8], &tmpDst[8]);
    tmpDst[9].re = pSrc[4].re - pSrc[20].re;
    tmpDst[9].im = pSrc[4].im - pSrc[20].im;
    tmpDst[8].re = pSrc[4].re + pSrc[20].re;
    tmpDst[8].im = pSrc[4].im + pSrc[20].im;
    // dft2Fwd(&tmpSrc[10], &tmpDst[10]);
    tmpDst[11].re = pSrc[5].re - pSrc[21].re;
    tmpDst[11].im = pSrc[5].im - pSrc[21].im;
    tmpDst[10].re = pSrc[5].re + pSrc[21].re;
    tmpDst[10].im = pSrc[5].im + pSrc[21].im;
    // dft2Fwd(&tmpSrc[12], &tmpDst[12]);
    tmpDst[13].re = pSrc[6].re - pSrc[22].re;
    tmpDst[13].im = pSrc[6].im - pSrc[22].im;
    tmpDst[12].re = pSrc[6].re + pSrc[22].re;
    tmpDst[12].im = pSrc[6].im + pSrc[22].im;
    // dft2Fwd(&tmpSrc[14], &tmpDst[14]);
    tmpDst[15].re = pSrc[7].re - pSrc[23].re;
    tmpDst[15].im = pSrc[7].im - pSrc[23].im;
    tmpDst[14].re = pSrc[7].re + pSrc[23].re;
    tmpDst[14].im = pSrc[7].im + pSrc[23].im;
    // dft2Fwd(&tmpSrc[16], &tmpDst[16]);
    tmpDst[17].re = pSrc[8].re - pSrc[24].re;
    tmpDst[17].im = pSrc[8].im - pSrc[24].im;
    tmpDst[16].re = pSrc[8].re + pSrc[24].re;
    tmpDst[16].im = pSrc[8].im + pSrc[24].im;
    // dft2Fwd(&tmpSrc[18], &tmpDst[18]);
    tmpDst[19].re = pSrc[9].re - pSrc[25].re;
    tmpDst[19].im = pSrc[9].im - pSrc[25].im;
    tmpDst[18].re = pSrc[9].re + pSrc[25].re;
    tmpDst[18].im = pSrc[9].im + pSrc[25].im;
    // dft2Fwd(&tmpSrc[20], &tmpDst[20]);
    tmpDst[21].re = pSrc[10].re - pSrc[26].re;
    tmpDst[21].im = pSrc[10].im - pSrc[26].im;
    tmpDst[20].re = pSrc[10].re + pSrc[26].re;
    tmpDst[20].im = pSrc[10].im + pSrc[26].im;
    // dft2Fwd(&tmpSrc[22], &tmpDst[22]);
    tmpDst[23].re = pSrc[11].re - pSrc[27].re;
    tmpDst[23].im = pSrc[11].im - pSrc[27].im;
    tmpDst[22].re = pSrc[11].re + pSrc[27].re;
    tmpDst[22].im = pSrc[11].im + pSrc[27].im;
    // dft2Fwd(&tmpSrc[24], &tmpDst[24]);
    tmpDst[25].re = pSrc[12].re - pSrc[28].re;
    tmpDst[25].im = pSrc[12].im - pSrc[28].im;
    tmpDst[24].re = pSrc[12].re + pSrc[28].re;
    tmpDst[24].im = pSrc[12].im + pSrc[28].im;
    // dft2Fwd(&tmpSrc[26], &tmpDst[26]);
    tmpDst[27].re = pSrc[13].re - pSrc[29].re;
    tmpDst[27].im = pSrc[13].im - pSrc[29].im;
    tmpDst[26].re = pSrc[13].re + pSrc[29].re;
    tmpDst[26].im = pSrc[13].im + pSrc[29].im;
    // dft2Fwd(&tmpSrc[28], &tmpDst[28]);
    tmpDst[29].re = pSrc[14].re - pSrc[30].re;
    tmpDst[29].im = pSrc[14].im - pSrc[30].im;
    tmpDst[28].re = pSrc[14].re + pSrc[30].re;
    tmpDst[28].im = pSrc[14].im + pSrc[30].im;
    // dft2Fwd(&tmpSrc[30], &tmpDst[30]);
    tmpDst[31].re = pSrc[15].re - pSrc[31].re;
    tmpDst[31].im = pSrc[15].im - pSrc[31].im;
    tmpDst[30].re = pSrc[15].re + pSrc[31].re;
    tmpDst[30].im = pSrc[15].im + pSrc[31].im;


    float n8 = 0.980785;
    float n2 = 0.923880;
    float t = 0.382683;
    float s = 0.707107;
    float f = 0.555570;
    float o = 0.195090;
    float e = 0.831470;

    float re = tmpDst[3].re * n8 - tmpDst[3].im * -o;
    tmpDst[3].im = tmpDst[3].im * n8 + tmpDst[3].re * -o;
    tmpDst[3].re = re;
   
    re = tmpDst[5].re * n2 - tmpDst[5].im * -t;
    tmpDst[5].im = tmpDst[5].im * n2 + tmpDst[5].re * -t;
    tmpDst[5].re = re;
 
    re = tmpDst[7].re * e - tmpDst[7].im * -f;
    tmpDst[7].im = tmpDst[7].im * e + tmpDst[7].re * -f;
    tmpDst[7].re = re;
  

    float mul1 = tmpDst[9].re * s;
    float mul2 = tmpDst[9].im * s;
    tmpDst[9].re = mul1 + mul2;
    tmpDst[9].im = mul2 - mul1;
   
    re = tmpDst[11].re * f - tmpDst[11].im * -e;
    tmpDst[11].im  = tmpDst[11].im * f + tmpDst[11].re * -e;
    tmpDst[11].re = re;

    re = tmpDst[13].re * t - tmpDst[13].im * -n8;
    tmpDst[13].im = tmpDst[13].im * t + tmpDst[13].re * -n8;
    tmpDst[13].re = re;

    re = tmpDst[15].re * o - tmpDst[15].im * -n8;
    tmpDst[15].im = tmpDst[15].im * o + tmpDst[15].re * -n8;
    tmpDst[15].re = re;

    re = tmpDst[19].re * -o - tmpDst[19].im * -n8;
    tmpDst[19].im = tmpDst[19].im * -o + tmpDst[19].re * -n8;
    tmpDst[19].re = re;

    re = tmpDst[21].re * -t - tmpDst[21].im * -n2;
    tmpDst[21].im = tmpDst[21].im * -t + tmpDst[21].re * -n2;
    tmpDst[21].re = re;

    re = tmpDst[23].re * -f - tmpDst[23].im * -e;
    tmpDst[23].im = tmpDst[23].im * -f + tmpDst[23].re * -e;
    tmpDst[23].re = re;

    mul1 = tmpDst[25].re * -s;
    mul2 = tmpDst[25].im * -s;
    
    tmpDst[25].im = mul2 + mul1;
    tmpDst[25].re =  mul1 - mul2;

    re = tmpDst[27].re * -e - tmpDst[27].im * -f;
    tmpDst[27].im = tmpDst[27].im * -e + tmpDst[27].re * -f;
    tmpDst[27].re = re;

    re = tmpDst[29].re * -n2 - tmpDst[29].im * -t;
    tmpDst[29].im = tmpDst[29].im * -n2 + tmpDst[29].re * -t;
    tmpDst[29].re = re;

    re = tmpDst[31].re * -n8 - tmpDst[31].im * -o;
    tmpDst[31].im = tmpDst[31].im * -n8 + tmpDst[31].re * -o;
    tmpDst[31].re = re;
    
    //dft16Fwd(&tmpSrc[0], &tmpDst[0]);
    cfloat32_t tmpDst16[16];
    cfloat32_t tmpDst4[4];
    tmpDst4[0].re = tmpDst[0].re + tmpDst[16].re;
    tmpDst4[0].im = tmpDst[0].im + tmpDst[16].im;
    tmpDst4[1].re = tmpDst[0].re - tmpDst[16].re;
    tmpDst4[1].im = tmpDst[0].im - tmpDst[16].im;
    tmpDst4[2].re = tmpDst[8].re + tmpDst[24].re;
    tmpDst4[2].im = tmpDst[8].im + tmpDst[24].im;
    tmpDst4[3].re = tmpDst[8].re - tmpDst[24].re;
    tmpDst4[3].im = tmpDst[8].im - tmpDst[24].im;
    tmpDst16[0].re = tmpDst4[0].re + tmpDst4[2].re;
    tmpDst16[0].im = tmpDst4[0].im + tmpDst4[2].im;
    tmpDst16[1].re = tmpDst4[1].re + tmpDst4[3].im;
    tmpDst16[1].im = tmpDst4[1].im - tmpDst4[3].re;
    tmpDst16[2].re = tmpDst4[0].re - tmpDst4[2].re;
    tmpDst16[2].im = tmpDst4[0].im - tmpDst4[2].im;
    tmpDst16[3].re = tmpDst4[1].re - tmpDst4[3].im;
    tmpDst16[3].im = tmpDst4[1].im + tmpDst4[3].re;
    tmpDst4[0].re = tmpDst[2].re + tmpDst[18].re;
    tmpDst4[0].im = tmpDst[2].im + tmpDst[18].im;
    tmpDst4[1].re = tmpDst[2].re - tmpDst[18].re;
    tmpDst4[1].im = tmpDst[2].im - tmpDst[18].im;
    tmpDst4[2].re = tmpDst[10].re + tmpDst[26].re;
    tmpDst4[2].im = tmpDst[10].im + tmpDst[26].im;
    tmpDst4[3].re = tmpDst[10].re - tmpDst[26].re;
    tmpDst4[3].im = tmpDst[10].im - tmpDst[26].im;
    tmpDst16[4].re = tmpDst4[0].re + tmpDst4[2].re;
    tmpDst16[4].im = tmpDst4[0].im + tmpDst4[2].im;
    tmpDst16[5].re = tmpDst4[1].re + tmpDst4[3].im;
    tmpDst16[5].im = tmpDst4[1].im - tmpDst4[3].re;
    tmpDst16[6].re = tmpDst4[0].re - tmpDst4[2].re;
    tmpDst16[6].im = tmpDst4[0].im - tmpDst4[2].im;
    tmpDst16[7].re = tmpDst4[1].re - tmpDst4[3].im;
    tmpDst16[7].im = tmpDst4[1].im + tmpDst4[3].re;
   
    tmpDst4[0].re = tmpDst[4].re + tmpDst[20].re;
    tmpDst4[0].im = tmpDst[4].im + tmpDst[20].im;
    tmpDst4[1].re = tmpDst[4].re - tmpDst[20].re;
    tmpDst4[1].im = tmpDst[4].im - tmpDst[20].im;
    tmpDst4[2].re = tmpDst[12].re + tmpDst[28].re;
    tmpDst4[2].im = tmpDst[12].im + tmpDst[28].im;
    tmpDst4[3].re = tmpDst[12].re - tmpDst[28].re;
    tmpDst4[3].im = tmpDst[12].im - tmpDst[28].im;
    tmpDst16[8].re = tmpDst4[0].re + tmpDst4[2].re;
    tmpDst16[8].im = tmpDst4[0].im + tmpDst4[2].im;
    tmpDst16[9].re = tmpDst4[1].re + tmpDst4[3].im;
    tmpDst16[9].im = tmpDst4[1].im - tmpDst4[3].re;
    tmpDst16[10].re = tmpDst4[0].re - tmpDst4[2].re;
    tmpDst16[10].im = tmpDst4[0].im - tmpDst4[2].im;
    tmpDst16[11].re = tmpDst4[1].re - tmpDst4[3].im;
    tmpDst16[11].im = tmpDst4[1].im + tmpDst4[3].re;
    
    tmpDst4[0].re = tmpDst[6].re + tmpDst[22].re;
    tmpDst4[0].im = tmpDst[6].im + tmpDst[22].im;
    tmpDst4[1].re = tmpDst[6].re - tmpDst[22].re;
    tmpDst4[1].im = tmpDst[6].im - tmpDst[22].im;
    tmpDst4[2].re = tmpDst[14].re + tmpDst[30].re;
    tmpDst4[2].im = tmpDst[14].im + tmpDst[30].im;
    tmpDst4[3].re = tmpDst[14].re - tmpDst[30].re;
    tmpDst4[3].im = tmpDst[14].im - tmpDst[30].im;
    tmpDst16[12].re = tmpDst4[0].re + tmpDst4[2].re;
    tmpDst16[12].im = tmpDst4[0].im + tmpDst4[2].im;
    tmpDst16[13].re = tmpDst4[1].re + tmpDst4[3].im;
    tmpDst16[13].im = tmpDst4[1].im - tmpDst4[3].re;
    tmpDst16[14].re = tmpDst4[0].re - tmpDst4[2].re;
    tmpDst16[14].im = tmpDst4[0].im - tmpDst4[2].im;
    tmpDst16[15].re = tmpDst4[1].re - tmpDst4[3].im;
    tmpDst16[15].im = tmpDst4[1].im + tmpDst4[3].re;


    re = tmpDst16[5].re * n2 + tmpDst16[5].im * t;
    tmpDst16[5].im = tmpDst16[5].im * n2 - tmpDst16[5].re * t;
    tmpDst16[5].re = re;

    mul1 = tmpDst16[6].re * s;
    mul2 = tmpDst16[6].im * s;
    tmpDst16[6].im = mul2 - mul1;
    tmpDst16[6].re = mul1 + mul2;

    re = tmpDst16[7].re * t + tmpDst16[7].im * n2;
    tmpDst16[7].im = tmpDst16[7].im * t - tmpDst16[7].re * n2;
    tmpDst16[7].re = re;

    mul1 = tmpDst16[9].re * s;
    mul2 = tmpDst16[9].im * s;
    tmpDst16[9].im = mul2 - mul1;
    tmpDst16[9].re = mul1 + mul2;

    mul1 = tmpDst16[11].re * s;
    mul2 = tmpDst16[11].im * s;
    tmpDst16[11].im  = -mul2 - mul1;
    tmpDst16[11].re = mul2 - mul1;

    re = tmpDst16[13].re * t + tmpDst16[13].im * n2;
    tmpDst16[13].im = tmpDst16[13].im * t - tmpDst16[13].re * n2;
    tmpDst16[13].re = re;

    mul1 = tmpDst16[14].re * -s;
    mul2 = tmpDst16[14].im * -s;
    tmpDst16[14].im = mul2 + mul1;
    tmpDst16[14].re = mul1 - mul2;

    re = tmpDst16[15].re * -n2 - tmpDst16[15].im * t;
    tmpDst16[15].im = tmpDst16[15].im * -n2 + tmpDst16[15].re * t;
    tmpDst16[15].re = re;

    tmpDst4[0].re = tmpDst16[0].re + tmpDst16[8].re;
    tmpDst4[0].im = tmpDst16[0].im + tmpDst16[8].im;
    tmpDst4[1].re = tmpDst16[0].re - tmpDst16[8].re;
    tmpDst4[1].im = tmpDst16[0].im - tmpDst16[8].im;
    tmpDst4[2].re = tmpDst16[4].re + tmpDst16[12].re;
    tmpDst4[2].im = tmpDst16[4].im + tmpDst16[12].im;
    tmpDst4[3].re = tmpDst16[4].re - tmpDst16[12].re;
    tmpDst4[3].im = tmpDst16[4].im - tmpDst16[12].im;
    pDst[0].re = tmpDst4[0].re + tmpDst4[2].re;
    pDst[0].im = tmpDst4[0].im + tmpDst4[2].im;
    pDst[8].re = tmpDst4[1].re + tmpDst4[3].im;
    pDst[8].im = tmpDst4[1].im - tmpDst4[3].re;
    pDst[16].re = tmpDst4[0].re - tmpDst4[2].re;
    pDst[16].im = tmpDst4[0].im - tmpDst4[2].im;
    pDst[24].re = tmpDst4[1].re - tmpDst4[3].im;
    pDst[24].im = tmpDst4[1].im + tmpDst4[3].re;
    
    tmpDst4[0].re = tmpDst16[1].re + tmpDst16[9].re;
    tmpDst4[0].im = tmpDst16[1].im + tmpDst16[9].im;
    tmpDst4[1].re = tmpDst16[1].re - tmpDst16[9].re;
    tmpDst4[1].im = tmpDst16[1].im - tmpDst16[9].im;
    tmpDst4[2].re = tmpDst16[5].re + tmpDst16[13].re;
    tmpDst4[2].im = tmpDst16[5].im + tmpDst16[13].im;
    tmpDst4[3].re = tmpDst16[5].re - tmpDst16[13].re;
    tmpDst4[3].im = tmpDst16[5].im - tmpDst16[13].im;
    pDst[2].re = tmpDst4[0].re + tmpDst4[2].re;
    pDst[2].im = tmpDst4[0].im + tmpDst4[2].im;
    pDst[10].re = tmpDst4[1].re + tmpDst4[3].im;
    pDst[10].im = tmpDst4[1].im - tmpDst4[3].re;
    pDst[18].re = tmpDst4[0].re - tmpDst4[2].re;
    pDst[18].im = tmpDst4[0].im - tmpDst4[2].im;
    pDst[26].re = tmpDst4[1].re - tmpDst4[3].im;
    pDst[26].im = tmpDst4[1].im + tmpDst4[3].re;
    
    tmpDst4[0].re = tmpDst16[2].re + tmpDst16[10].im;
    tmpDst4[0].im = tmpDst16[2].im - tmpDst16[10].re;
    tmpDst4[1].re = tmpDst16[2].re - tmpDst16[10].im;
    tmpDst4[1].im = tmpDst16[2].im + tmpDst16[10].re;
    tmpDst4[2].re = tmpDst16[6].re + tmpDst16[14].re;
    tmpDst4[2].im = tmpDst16[6].im + tmpDst16[14].im;
    tmpDst4[3].re = tmpDst16[6].re - tmpDst16[14].re;
    tmpDst4[3].im = tmpDst16[6].im - tmpDst16[14].im;
    pDst[4].re = tmpDst4[0].re + tmpDst4[2].re;
    pDst[4].im = tmpDst4[0].im + tmpDst4[2].im;
    pDst[12].re = tmpDst4[1].re + tmpDst4[3].im;
    pDst[12].im = tmpDst4[1].im - tmpDst4[3].re;
    pDst[20].re = tmpDst4[0].re - tmpDst4[2].re;
    pDst[20].im = tmpDst4[0].im - tmpDst4[2].im;
    pDst[28].re = tmpDst4[1].re - tmpDst4[3].im;
    pDst[28].im = tmpDst4[1].im + tmpDst4[3].re;
   
    tmpDst4[0].re = tmpDst16[3].re + tmpDst16[11].re;
    tmpDst4[0].im = tmpDst16[3].im + tmpDst16[11].im;
    tmpDst4[1].re = tmpDst16[3].re - tmpDst16[11].re;
    tmpDst4[1].im = tmpDst16[3].im - tmpDst16[11].im;
    tmpDst4[2].re = tmpDst16[7].re + tmpDst16[15].re;
    tmpDst4[2].im = tmpDst16[7].im + tmpDst16[15].im;
    tmpDst4[3].re = tmpDst16[7].re - tmpDst16[15].re;
    tmpDst4[3].im = tmpDst16[7].im - tmpDst16[15].im;
    pDst[6].re = tmpDst4[0].re + tmpDst4[2].re;
    pDst[6].im = tmpDst4[0].im + tmpDst4[2].im;
    pDst[14].re = tmpDst4[1].re + tmpDst4[3].im;
    pDst[14].im = tmpDst4[1].im - tmpDst4[3].re;
    pDst[22].re = tmpDst4[0].re - tmpDst4[2].re;
    pDst[22].im = tmpDst4[0].im - tmpDst4[2].im;
    pDst[30].re = tmpDst4[1].re - tmpDst4[3].im;
    pDst[30].im = tmpDst4[1].im + tmpDst4[3].re; 


    //
   // dft16Fwd(&tmpSrc[16], &tmpDst[16]);
    tmpDst4[0].re = tmpDst[1].re + tmpDst[17].im; 
    tmpDst4[0].im = tmpDst[1].im - tmpDst[17].re; 
    tmpDst4[1].re = tmpDst[1].re - tmpDst[17].im;
    tmpDst4[1].im = tmpDst[1].im + tmpDst[17].re;
    tmpDst4[2].re = tmpDst[9].re + tmpDst[25].re;
    tmpDst4[2].im = tmpDst[9].im + tmpDst[25].im;
    tmpDst4[3].re = tmpDst[9].re - tmpDst[25].re;
    tmpDst4[3].im = tmpDst[9].im - tmpDst[25].im;
    tmpDst16[0].re = tmpDst4[0].re + tmpDst4[2].re;
    tmpDst16[0].im = tmpDst4[0].im + tmpDst4[2].im;
    tmpDst16[1].re = tmpDst4[1].re + tmpDst4[3].im;
    tmpDst16[1].im = tmpDst4[1].im - tmpDst4[3].re;
    tmpDst16[2].re = tmpDst4[0].re - tmpDst4[2].re;
    tmpDst16[2].im = tmpDst4[0].im - tmpDst4[2].im;
    tmpDst16[3].re = tmpDst4[1].re - tmpDst4[3].im;
    tmpDst16[3].im = tmpDst4[1].im + tmpDst4[3].re;
    tmpDst4[0].re = tmpDst[3].re + tmpDst[19].re;
    tmpDst4[0].im = tmpDst[3].im + tmpDst[19].im;
    tmpDst4[1].re = tmpDst[3].re - tmpDst[19].re;
    tmpDst4[1].im = tmpDst[3].im - tmpDst[19].im;
    tmpDst4[2].re = tmpDst[11].re + tmpDst[27].re;
    tmpDst4[2].im = tmpDst[11].im + tmpDst[27].im;
    tmpDst4[3].re = tmpDst[11].re - tmpDst[27].re;
    tmpDst4[3].im = tmpDst[11].im - tmpDst[27].im;
    tmpDst16[4].re = tmpDst4[0].re + tmpDst4[2].re;
    tmpDst16[4].im = tmpDst4[0].im + tmpDst4[2].im;
    tmpDst16[5].re = tmpDst4[1].re + tmpDst4[3].im;
    tmpDst16[5].im = tmpDst4[1].im - tmpDst4[3].re;
    tmpDst16[6].re = tmpDst4[0].re - tmpDst4[2].re;
    tmpDst16[6].im = tmpDst4[0].im - tmpDst4[2].im;
    tmpDst16[7].re = tmpDst4[1].re - tmpDst4[3].im;
    tmpDst16[7].im = tmpDst4[1].im + tmpDst4[3].re;
   
    tmpDst4[0].re = tmpDst[5].re + tmpDst[21].re;
    tmpDst4[0].im = tmpDst[5].im + tmpDst[21].im;
    tmpDst4[1].re = tmpDst[5].re - tmpDst[21].re;
    tmpDst4[1].im = tmpDst[5].im - tmpDst[21].im;
    tmpDst4[2].re = tmpDst[13].re + tmpDst[29].re;
    tmpDst4[2].im = tmpDst[13].im + tmpDst[29].im;
    tmpDst4[3].re = tmpDst[13].re - tmpDst[29].re;
    tmpDst4[3].im = tmpDst[13].im - tmpDst[29].im;
    tmpDst16[8].re = tmpDst4[0].re + tmpDst4[2].re;
    tmpDst16[8].im = tmpDst4[0].im + tmpDst4[2].im;
    tmpDst16[9].re = tmpDst4[1].re + tmpDst4[3].im;
    tmpDst16[9].im = tmpDst4[1].im - tmpDst4[3].re;
    tmpDst16[10].re = tmpDst4[0].re - tmpDst4[2].re;
    tmpDst16[10].im = tmpDst4[0].im - tmpDst4[2].im;
    tmpDst16[11].re = tmpDst4[1].re - tmpDst4[3].im;
    tmpDst16[11].im = tmpDst4[1].im + tmpDst4[3].re;
    
    tmpDst4[0].re = tmpDst[7].re + tmpDst[23].re;
    tmpDst4[0].im = tmpDst[7].im + tmpDst[23].im;
    tmpDst4[1].re = tmpDst[7].re - tmpDst[23].re;
    tmpDst4[1].im = tmpDst[7].im - tmpDst[23].im;
    tmpDst4[2].re = tmpDst[15].re + tmpDst[31].re;
    tmpDst4[2].im = tmpDst[15].im + tmpDst[31].im;
    tmpDst4[3].re = tmpDst[15].re - tmpDst[31].re;
    tmpDst4[3].im = tmpDst[15].im - tmpDst[31].im;
    tmpDst16[12].re = tmpDst4[0].re + tmpDst4[2].re;
    tmpDst16[12].im = tmpDst4[0].im + tmpDst4[2].im;
    tmpDst16[13].re = tmpDst4[1].re + tmpDst4[3].im;
    tmpDst16[13].im = tmpDst4[1].im - tmpDst4[3].re;
    tmpDst16[14].re = tmpDst4[0].re - tmpDst4[2].re;
    tmpDst16[14].im = tmpDst4[0].im - tmpDst4[2].im;
    tmpDst16[15].re = tmpDst4[1].re - tmpDst4[3].im;
    tmpDst16[15].im = tmpDst4[1].im + tmpDst4[3].re;

    re = tmpDst16[5].re * n2 + tmpDst16[5].im * t;
    tmpDst16[5].im = tmpDst16[5].im * n2 - tmpDst16[5].re * t;
    tmpDst16[5].re = re;

    mul1 = tmpDst16[6].re * s;
    mul2 = tmpDst16[6].im * s;
    tmpDst16[6].im = mul2 - mul1;
    tmpDst16[6].re = mul1 + mul2;

    re = tmpDst16[7].re * t + tmpDst16[7].im * n2;
    tmpDst16[7].im = tmpDst16[7].im * t - tmpDst16[7].re * n2;
    tmpDst16[7].re = re;

    mul1 = tmpDst16[9].re * s;
    mul2 = tmpDst16[9].im * s;
    tmpDst16[9].im = mul2 - mul1;
    tmpDst16[9].re = mul1 + mul2;

    mul1 = tmpDst16[11].re * s;
    mul2 = tmpDst16[11].im * s;
    tmpDst16[11].im  = -mul2 - mul1;
    tmpDst16[11].re = mul2 - mul1;

    re = tmpDst16[13].re * t + tmpDst16[13].im * n2;
    tmpDst16[13].im = tmpDst16[13].im * t - tmpDst16[13].re * n2;
    tmpDst16[13].re = re;

    mul1 = tmpDst16[14].re * -s;
    mul2 = tmpDst16[14].im * -s;
    tmpDst16[14].im = mul2 + mul1;
    tmpDst16[14].re = mul1 - mul2;

    re = tmpDst16[15].re * -n2 - tmpDst16[15].im * t;
    tmpDst16[15].im = tmpDst16[15].im * -n2 + tmpDst16[15].re * t;
    tmpDst16[15].re = re;

    tmpDst4[0].re = tmpDst16[0].re + tmpDst16[8].re;
    tmpDst4[0].im = tmpDst16[0].im + tmpDst16[8].im;
    tmpDst4[1].re = tmpDst16[0].re - tmpDst16[8].re;
    tmpDst4[1].im = tmpDst16[0].im - tmpDst16[8].im;
    tmpDst4[2].re = tmpDst16[4].re + tmpDst16[12].re;
    tmpDst4[2].im = tmpDst16[4].im + tmpDst16[12].im;
    tmpDst4[3].re = tmpDst16[4].re - tmpDst16[12].re;
    tmpDst4[3].im = tmpDst16[4].im - tmpDst16[12].im;
    pDst[1].re = tmpDst4[0].re + tmpDst4[2].re;
    pDst[1].im = tmpDst4[0].im + tmpDst4[2].im;
    pDst[9].re = tmpDst4[1].re + tmpDst4[3].im;
    pDst[9].im = tmpDst4[1].im - tmpDst4[3].re;
    pDst[17].re = tmpDst4[0].re - tmpDst4[2].re;
    pDst[17].im = tmpDst4[0].im - tmpDst4[2].im;
    pDst[25].re = tmpDst4[1].re - tmpDst4[3].im;
    pDst[25].im = tmpDst4[1].im + tmpDst4[3].re;
    
    tmpDst4[0].re = tmpDst16[1].re + tmpDst16[9].re;
    tmpDst4[0].im = tmpDst16[1].im + tmpDst16[9].im;
    tmpDst4[1].re = tmpDst16[1].re - tmpDst16[9].re;
    tmpDst4[1].im = tmpDst16[1].im - tmpDst16[9].im;
    tmpDst4[2].re = tmpDst16[5].re + tmpDst16[13].re;
    tmpDst4[2].im = tmpDst16[5].im + tmpDst16[13].im;
    tmpDst4[3].re = tmpDst16[5].re - tmpDst16[13].re;
    tmpDst4[3].im = tmpDst16[5].im - tmpDst16[13].im;
    pDst[3].re = tmpDst4[0].re + tmpDst4[2].re;
    pDst[3].im = tmpDst4[0].im + tmpDst4[2].im;
    pDst[11].re = tmpDst4[1].re + tmpDst4[3].im;
    pDst[11].im = tmpDst4[1].im - tmpDst4[3].re;
    pDst[19].re = tmpDst4[0].re - tmpDst4[2].re;
    pDst[19].im = tmpDst4[0].im - tmpDst4[2].im;
    pDst[27].re = tmpDst4[1].re - tmpDst4[3].im;
    pDst[27].im = tmpDst4[1].im + tmpDst4[3].re;
    
    tmpDst4[0].re = tmpDst16[2].re + tmpDst16[10].im;
    tmpDst4[0].im = tmpDst16[2].im - tmpDst16[10].re;
    tmpDst4[1].re = tmpDst16[2].re - tmpDst16[10].im;
    tmpDst4[1].im = tmpDst16[2].im + tmpDst16[10].re;
    tmpDst4[2].re = tmpDst16[6].re + tmpDst16[14].re;
    tmpDst4[2].im = tmpDst16[6].im + tmpDst16[14].im;
    tmpDst4[3].re = tmpDst16[6].re - tmpDst16[14].re;
    tmpDst4[3].im = tmpDst16[6].im - tmpDst16[14].im;
    pDst[5].re = tmpDst4[0].re + tmpDst4[2].re;
    pDst[5].im = tmpDst4[0].im + tmpDst4[2].im;
    pDst[13].re = tmpDst4[1].re + tmpDst4[3].im;
    pDst[13].im = tmpDst4[1].im - tmpDst4[3].re;
    pDst[21].re = tmpDst4[0].re - tmpDst4[2].re;
    pDst[21].im = tmpDst4[0].im - tmpDst4[2].im;
    pDst[29].re = tmpDst4[1].re - tmpDst4[3].im;
    pDst[29].im = tmpDst4[1].im + tmpDst4[3].re;
   
    tmpDst4[0].re = tmpDst16[3].re + tmpDst16[11].re;
    tmpDst4[0].im = tmpDst16[3].im + tmpDst16[11].im;
    tmpDst4[1].re = tmpDst16[3].re - tmpDst16[11].re;
    tmpDst4[1].im = tmpDst16[3].im - tmpDst16[11].im;
    tmpDst4[2].re = tmpDst16[7].re + tmpDst16[15].re;
    tmpDst4[2].im = tmpDst16[7].im + tmpDst16[15].im;
    tmpDst4[3].re = tmpDst16[7].re - tmpDst16[15].re;
    tmpDst4[3].im = tmpDst16[7].im - tmpDst16[15].im;
    pDst[7].re = tmpDst4[0].re + tmpDst4[2].re;
    pDst[7].im = tmpDst4[0].im + tmpDst4[2].im;
    pDst[15].re = tmpDst4[1].re + tmpDst4[3].im;
    pDst[15].im = tmpDst4[1].im - tmpDst4[3].re;
    pDst[23].re = tmpDst4[0].re - tmpDst4[2].re;
    pDst[23].im = tmpDst4[0].im - tmpDst4[2].im;
    pDst[31].re = tmpDst4[1].re - tmpDst4[3].im;
    pDst[31].im = tmpDst4[1].im + tmpDst4[3].re; 



    // pDst[0].re = tmpDst[0].re;
    // pDst[0].im = tmpDst[0].im;
    // pDst[2].re = tmpDst[1].re;
    // pDst[2].im = tmpDst[1].im;
    // pDst[4].re = tmpDst[2].re;
    // pDst[4].im = tmpDst[2].im;
    // pDst[6].re = tmpDst[3].re;
    // pDst[6].im = tmpDst[3].im;
    // pDst[8].re = tmpDst[4].re;
    // pDst[8].im = tmpDst[4].im;
    // pDst[10].re = tmpDst[5].re;
    // pDst[10].im = tmpDst[5].im;
    // pDst[12].re = tmpDst[6].re;
    // pDst[12].im = tmpDst[6].im;
    // pDst[14].re = tmpDst[7].re;
    // pDst[14].im = tmpDst[7].im;
    // pDst[16].re = tmpDst[8].re;
    // pDst[16].im = tmpDst[8].im;
    // pDst[18].re = tmpDst[9].re;
    // pDst[18].im = tmpDst[9].im;
    // pDst[20].re = tmpDst[10].re;
    // pDst[20].im = tmpDst[10].im;
    // pDst[22].re = tmpDst[11].re;
    // pDst[22].im = tmpDst[11].im;
    // pDst[24].re = tmpDst[12].re;
    // pDst[24].im = tmpDst[12].im;
    // pDst[26].re = tmpDst[13].re;
    // pDst[26].im = tmpDst[13].im;
    // pDst[28].re = tmpDst[14].re;
    // pDst[28].im = tmpDst[14].im;
    // pDst[30].re = tmpDst[15].re;
    // pDst[30].im = tmpDst[15].im;
    // pDst[1].re = tmpDst[16].re;
    // pDst[1].im = tmpDst[16].im;
    // pDst[3].re = tmpDst[17].re;
    // pDst[3].im = tmpDst[17].im;
    // pDst[5].re = tmpDst[18].re;
    // pDst[5].im = tmpDst[18].im;
    // pDst[7].re = tmpDst[19].re;
    // pDst[7].im = tmpDst[19].im;
    // pDst[9].re = tmpDst[20].re;
    // pDst[9].im = tmpDst[20].im;
    // pDst[11].re = tmpDst[21].re;
    // pDst[11].im = tmpDst[21].im;
    // pDst[13].re = tmpDst[22].re;
    // pDst[13].im = tmpDst[22].im;
    // pDst[15].re = tmpDst[23].re;
    // pDst[15].im = tmpDst[23].im;
    // pDst[17].re = tmpDst[24].re;
    // pDst[17].im = tmpDst[24].im;
    // pDst[19].re = tmpDst[25].re;
    // pDst[19].im = tmpDst[25].im;
    // pDst[21].re = tmpDst[26].re;
    // pDst[21].im = tmpDst[26].im;
    // pDst[23].re = tmpDst[27].re;
    // pDst[23].im = tmpDst[27].im;
    // pDst[25].re = tmpDst[28].re;
    // pDst[25].im = tmpDst[28].im;
    // pDst[27].re = tmpDst[29].re;
    // pDst[27].im = tmpDst[29].im;
    // pDst[29].re = tmpDst[30].re;
    // pDst[29].im = tmpDst[30].im;
    // pDst[31].re = tmpDst[31].re;
    // pDst[31].im = tmpDst[31].im;
}
