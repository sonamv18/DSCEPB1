#include<stdio.h>
int compare(int a,int b,int c)
{
    if(a>b)
    {
        if(a>c)
                return a;
        else
                return c;
    }
    else if(b>c)
                return b;
    else
                return c;


     return a;
}

int main()
{
    int a,b,c,grtst;
    printf("Enter three nmbers to be  compared");
    scanf("%d %d %d" , &a,&b,&c);
    grtst=compare(a,b,c);
    printf("The largest of three given nmbers is %d",grtst);
}

