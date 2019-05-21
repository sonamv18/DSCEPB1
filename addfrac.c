#include<stdio.h>


int input_nm()
    {
         int num;
         printf("enter the numerator of the fraction");
         scanf("%d", &num);
         return num;
    }

int inpt_dn()
    {
         int den;
         printf("enter the denominator of the fraction");
         scanf("%d",&den);
         return den;
    }

int gcd(int rnum, int cd)
    {
         int gcd=1;
         if(rnum%gcd=0&&cd%gcd=0)
         gcd++;
         else
         return gcd;
    }

int compute_d(int den1,int den2)
    {
         int cd=(den1*den2);
         return cd;
    }
int compute_n(int num1,int num2)
    {
      int rnum=(num1*den2)+(num2*den1);
      retrn rnum;
    }

void output(int num1,int num2,int den1,int den2,int rnum,int cd,int gcd)
    {
        int rn=rnum/gcd;
        int cd=cd/gcd;
        printf("the sum of %d/%d + %d/%d = %d/%d", num1,den1,num2,den2,rn,cd );
    }
    }

int main()
    {
         int num1=input_nm();
         int num2=input_nm();
         int den1=input_dn();
         int den2=input_dn();
         int rnum= compute_n(num1,num2);
         int rden=compute_d(den1,den2);
         int gcd=gcd(rnum,rden);
         output(num1,num2,den1,den2,rnum,rden,gcd);
         return -1;
    }

    }

int main()
    {
         int num1=input_nm();
         int num2=input_nm();
         int den1=input_dn();
         int den2=input_dn();
         int rnum= compute_n(num1,num2);
         int rden=compute_d(den1,den2);
         int gcd=gcd(rnum,rden);
         output(num1,num2,den1,den2,rnum,rden,gcd);
         return -1;
    }

int main()
    {
         int num1=input_nm();
         int num2=input_nm();
         int den1=input_dn();
         int den2=input_dn();
         int rnum= compute_n(num1,num2);
         int rden=compute_d(den1,den2);
         int gcd=gcd(rnum,rden);
         output(num1,num2,den1,den2,rnum,rden,gcd);
         return -1;
    }


