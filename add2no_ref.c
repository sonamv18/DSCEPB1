#include<stdio.h>

int get_inp(int *a,int*b)
{
   printf("enter two numbers\n");
   scanf("%d %d",a,b);
   return -1;
}

int compute(int a,int b)
{
    int sum;
    sum=a+b;
    return sum;
}
void out(int a, int b, int sum)
{
     printf("the sum of %d and %d is %d" , a, b, sum);
}

int main()
{
    int p=0,q=0;
    get_inp(&p,&q);
    int Z=compute(p,q);
    out(p,q,Z);
}

