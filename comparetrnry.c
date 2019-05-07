#include<stdio.h>
int compare(int a,int b,int c)
{
    int max;
    max=(a>b)?a:b ;

     max=(max>c)?max:c;

    return max;
}

int main()
{
    int a,b,c,grtst;
    printf("Enter three nmbers to be  compared");
    scanf("%d %d %d" , &a,&b,&c);
    grtst=compare(a,b,c);
    printf("The largest of three given nmbers is %d",grtst);
}




