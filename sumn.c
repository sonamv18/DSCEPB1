#include<stdio.h>
int input()
{
    int i ,n, a[10000];
    printf(" enter the value of n");
    scanf("%d" , &n);
    printf("enter the numbers");
    for(i=0;i<n;i++)
    {
        scanf("%d" , &a[i]);
        return a[i];
    }
    return -1;
}

int main()
{
    int n;int a[10000];
    for(int i=0;i<n;i++)
    {
        input(a[10000]);
    }
}


