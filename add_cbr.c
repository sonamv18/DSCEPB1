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

void output(int *a)
    {
      printf("%d+1 is %d", a,*a);
    }
int main()
    {
      int *a,c;
      a=&c;
      get_input(a);
      addone(a);
      output(a);
    }

