#include<stdio.h>
int input()
{
    int a;
    printf("enter the nmber to be compared");
    scanf("%d", &a);
    return a;
}

int compare(int a ,int b, int c)
{
    int max;
    max=(a>b)?((a>c)?a:c):((b>c)?b:c);
    return max;
}

void output(int max)
{
    printf("%d is the greatest" , max);
}

int main()
{
    int a,b,c,max;
    a=input();
    b=input();
    c=input();
    max=compare(a,b,c);
    output(max);
}









