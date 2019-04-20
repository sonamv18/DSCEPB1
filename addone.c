 
#include<stdio.h>
int get_input()
    {
       int a;
       printf("Enter a number:");
       scanf("%d",&a);
       return a;
    }

int addone(int a)
    {
       int b= a+1;
       return b;
    }

void output(int a,int b)
    {
      printf("%d +1 is %d", a,b);
    }

int main()
    {
      int a=get_input();
      int b=addone( a);
      output(  a, b );
    }





