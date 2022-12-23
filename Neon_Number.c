#include<stdio.h>
int main()
{
    int n,rem,sum=0;
    scanf("%d",&n);
    int sq=n*n;
    while(sq>0)
    {
        rem=sq%10;
        sum=sum+rem;
        sq=sq/10;
    }
    if(n==sum)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}