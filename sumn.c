
#include<stdio.h>

int input()
    {
        int n;
        printf("enter the n value");
        scanf("%d",&n);
        return n;
    }

int inputa(int a[],int N)
    {
        int i;
        printf("enter the elements of array");
        for(i=0;i< N;i++)
        {
             scanf(" %d",&a[i]);

        }
        return -1;
    }
int compute(int a[], int N)
    {
         int i, sum=0;
         for(i=0;i<N;i++)
         {
             sum=sum+a[i];
         }
         return sum;
    }

int output(int res)
     {
         printf("the sum is %d",res);
         return -1;
      }

int main()
    {
         int N=input();
         int a[N];
         inputa(a,N);
         int res=compute(a,N);
         output(res);
    }




