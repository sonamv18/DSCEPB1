#include<stdio.h>


int input()
    {
         int i,value;
         for(i=1;i<5;i++)
             {
                 if(i%2==0)
                  {
                      printf("enter the numerator of the fraction");
                      scanf("%d", &value);
                  }
                 else
                  {
                      printf("enter the denominator of the fraction");
                      scanf("%d",&value);
                  }
                 return value;
              }
           return -1;
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
         int num1=input();
         int den1=input();
         int num2=input();
         int den2=input();
         int rnum= compute_n(num1,num2,den1,den2);
         int rden=compute_d(den1,den2);
         output(num1,num2,den1,den2,rnum,rden);
         return -1;
     }



