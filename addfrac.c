#include<stdio.h>


int input(int *num1,int *den1)
    {
        printf("enter nmerator and denominator\n");
        scanf("%d %d",num1,den1);
        return 0;
    }
int compute_d(int den1,int den2)
    {
         int cd=(den1*den2);
         return cd;
    }
int compute_n(int num1,int num2,int den1,int den2)
    {
      int rnum=(num1*den2)+(num2*den1);
      return rnum;
    }

void output(int num1,int num2,int den1,int den2,int rnum,int cd)
    {
        printf("the sum of %d/%d + %d/%d = %d/%d", num1,den1,num2,den2,rnum,cd );
    }

int main()
    {
         int num1=0,den1=0,num2=0,den2=0;
         input(&num1,&den1);
         input(&num2,&den2);
         int rnum= compute_n(num1,num2,den1,den2);
         int rden=compute_d(den1,den2);
         output(num1,num2,den1,den2,rnum,rden);
         return -1;
    }

