#include<stdio.h>

int get_inp()
{
   int a;
   printf("enter number\n");
   scanf("%d",&a);
   return a;
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
    int p=get_inp();
    int q=get_inp();
    int Z=compute(p,q);
    out(p,q,Z);
}



