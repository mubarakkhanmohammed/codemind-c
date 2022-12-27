#include<stdio.h>
int main()
{
    int a,b,c,tc,i,rem;
    scanf("%d%d",&a,&b);
    int temp=b;
    for(i=a;i<=b;i++)
    {
        temp=i;
        c=0;
        tc=0;
        while(temp>0)
        {
            rem=temp%10;
            c++;
            if(rem!=0 && i%rem==0)
            {
                tc++;
            }
            temp=temp/10;
        }
        if(c==tc)
        {
            printf("%d ",i);
        }
    }
}