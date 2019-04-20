
   #include<stdio.h>
 2 void get_input(int *a)
 3     {
 4        printf("Enter a number:");
 5        scanf("%d",a);
 6
 7     }
 8
 9 void addone(int a,int *b)
10     {
11        *b= a+1;
12     }
13
14 void output(int *a,int b)
15     {
16       printf("%n +1 is %d", a,b);
17     }
18 int main()
19     {
20       int *a,c,*b;
21       a=&c;
22       get_input(*a)
23       addone( a,&b);
24       output(  &a, b );
25     }
26
27
