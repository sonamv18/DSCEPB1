#include<stdio.h>
int compare(int a,int b,int c)
{
    if(a>b)
    {
        if(a>c)
        return a;
        else if(b==c)
        return a;
        else
        return c;
    }
    else if(b>a)
     {
         if(b>c)
         return b;
         else if(a==c)
         return b;
         else
         return c;
     }
     else if(c>a)
     {
         if(c>b)
         return c;
         else if(a==b)
         return c;
         else
         return b;
     }
     else if(a==b)
     {

        if(b==c)
          return c;
     }
     else
     return -1;


}

int main()
{
    int a,b,c,grtst;
    printf("Enter three nmbers to be  compared");
    scanf("%d %d %d" , &a,&b,&c);
    grtst=compare(a,b,c);
    printf("The largest of three given nmbers is %d",grtst);
}



