#include<stdio.h>
int main()
{
    int n,rem,sum=0,pro=1,c;
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        sum=sum+rem;
        pro=pro*rem;
        n=n/10;
    }
    c=pro-sum;
    printf("%d",c);
}