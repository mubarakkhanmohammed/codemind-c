#include<stdio.h>
int main()
{
    int n,rem,sum=0;
    scanf("%d",&n);
    int temp=n*n;
    while(temp>0)
    {
        rem=temp%10;
        sum=sum+rem;
        temp=temp/10;
        
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