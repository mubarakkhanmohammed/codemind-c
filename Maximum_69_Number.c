#include<stdio.h>
int main()
{
    int n,rev=0,rev1=0,r,r1,c=0;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    while(rev>0)
    {
        if(rev%10==6 && c==0)
        {
            rev1=rev1*10+9;
            c++;
        }
        else
        {
            r1=rev%10;
            rev1=rev1*10+r1;
        }
        rev=rev/10;
    }
    printf("%d",rev1);
}