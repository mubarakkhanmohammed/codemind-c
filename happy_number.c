#include<stdio.h>
int main()
{
    int n,rem,sum=0,i;
    scanf("%d",&n);
    int temp=n;
    while(n>0)
    {
        rem=n%10;
        sum=sum+rem*rem;
        n=n/10;
        if(n==0 && sum>=10)
        {
            n=sum;
            sum=0;
        }
    }
    if(sum==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}