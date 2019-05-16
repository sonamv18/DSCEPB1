#include <stdio.h>
char input()
    {
        char str1[25];int i;
        printf("enter the string");
        for(i=0;i!='\0';i++)
            {
                scanf("%c",&str1[i]);
            }
        return str1[25];
     }

int calc_len(char str1[])
    {
        int i;
        int len=0;
        for(i=0;i!='\0';i++)
        {
           len++;
        }
        return len;
    }

char concat(char str1[],char str2[],int len1,int len2)
    {
        int i=0,j=0;
        char str3[50];
        while(i<len1)
        {
            if(i==len1-1)
            {
                while(j!=len2-1)
                {
                    str3[i+1]=str2[j];
                    j++;
                }
            }
            else
                 str3[i]=str1[i];
            i++;
        }
        str3[i]='\0';
        return str3[50];
     }
int main()
     {
          char str1[25]=input();
          int len1=calc_len(str1[]);
          char str2[25]=input();
          int len2=calc_len(str2[]);
          char nstr[50]=concat(str1[],str2[],len1,len2);
          printf("the concatenated string is %c",nstr[]);
          return -1;
     }


