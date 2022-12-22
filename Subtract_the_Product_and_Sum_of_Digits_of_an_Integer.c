#include<stdio.h>
int main()
{
    int n,rem,pro=1,sum=0;
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        pro=pro*rem;
        sum=sum+rem;
        n=n/10;
    }
    printf("%d",pro-sum);
}