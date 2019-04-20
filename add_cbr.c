#include<stdio.h>
void get_input(int *a)
    {
       printf("Enter a number:");
       scanf("%d",a);

    }

void addone(int *a)
    {
       *a=*a+1;
    }

void output(int b , int *a)
    {
      printf("%d+1 is %d", b,*a);
    }
int main()
    {
      int a,b;
      get_input(&a);
      b=a;
      addone(&a);
      output(b ,&a);
    }

