#include<stdio.h>
int main()
{
    int n,pro=1,temp;
    scanf("%d",&n);
    temp=n;
    int sq=n*n;
    while(n>0)
    {
        pro=pro*10;
        n=n/10;
    }
    if(sq%pro==temp)
    {
        printf("Automorphic Number");
    }
    else
    {
        printf("Not an Automorphic Number");
    }
}