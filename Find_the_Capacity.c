#include<stdio.h>
int main()
{
    int s,t,b,tc,c;
    scanf("%d%d%d",&s,&t,&b);
    tc=2*s*t*b*512;
    c=tc/1024;
    printf("%dKB",c);
}