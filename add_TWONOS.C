int get_inp(int a)
{
    for(i=0;i<2;i++)
    printf("enter first number:");
    scanf("%d", &a);
     return a;
}

int get_inp2(int b)
{
    printf("enter second number:");
    scanf("%d" , &b);
    return b;
}

int compute(int a,int b)
{
    int sum;
    sum=a+b;
    return sum;
}
void out(int a, int b, int sum)
{
     printf("the sum of %d and %d is %d" , a, b, sum);
}

int main()
{
    int p=0,q=0;
    p=get_inp( p);
    q=get_inp2( q);
    int Z=compute( X, Y);
    out(X,Y,Z);
}

