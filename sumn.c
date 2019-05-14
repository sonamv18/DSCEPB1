#include<stdio.h>

int input()
    {
        int n;
        printf("enter the n value");
        scanf("%d",&n);
        return n;
    }

int inputa(a[size])
    {
        int *n,i;
        printf("enter the elements of array");
        for(i=0;i< n;i++)
        {
             scanf(" %d",a[i]);

        }

    }
int compute()
    {
         int i, sum==0;
         for(i=0;i<n;i++)
         {
             sum=sum+a[i];
         }
         return sum;
    }

int output(a[size])
     {
         int i;
         for(i=0;i<&n;i++)
         {
               printf("%d",a[i]);
         }
      }

int main()
    {
         int size=&n,a[size];
         input(a[size]);
         output(a[size]);
   compute(a[size]);
    }




