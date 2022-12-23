#include<stdio.h>
int main()
{
    int n,rem,rev=0,rev2=0,rem2;
    scanf("%d",&n);
    int temp=n;
    int sq=n*n;
    while(n>0)
    {
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    int sq2=rev*rev;
    while(sq2>0)
    {
        rem2=sq2%10;
        rev2=rev2*10+rem2;
        sq2=sq2/10;
    }
    if(sq==rev2)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}