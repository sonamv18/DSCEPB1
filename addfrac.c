#include<stdio.h>


float input()
    {
         int num,denom;
         printf("enter the numerator of the fraction");
         scanf("%d", &num);
         printf("enter the denominator of the fraction");
         scanf("%d",&denom);
         float frac=(num/denom);
         return frac;
    }

float compute( float frac1, float frac2)
    {

         float sum=0;
         sum=frac1+frac2;
         return sum;
     }

void output(float sum)
    {

        printf("the sum is %f",sum);
    }

int main()
    {
         float frac1=input();
         float frac2=input();
         float sum=compute(frac1,frac2);
         output(sum);
         return -1;
    }





