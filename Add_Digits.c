#include<stdio.h>
int main()
{
    int n,i,sum=0,rem;
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        sum=sum+rem;
        n=n/10;
        if(n==0 &&sum>10)
        {
            n=sum;
            sum=0;
        }
    }
    printf("%d",sum);
    
}