#include<stdio.h>
void get_input(int *x)
    {
       printf("Enter a number:");
       scanf("%d",x);

    }

void addone(int *a,int b)
    {
       b= *a+1;
    }

void output(int *a,int b)
    {
      printf("%n +1 is %d", a,b);
    }
int main()
    {
      int a,b;
      get_input(&a);
      addone( &a,b);
      output(  &a, b );
    }

