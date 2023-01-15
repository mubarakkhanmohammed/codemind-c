#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,rem,rem2,sum=0,c=0;
    scanf("%d",&n);
    int temp=n;
    while(temp>0)
    {
        rem=temp%10;
        c++;
        temp=temp/10;
    }
        int temp2=n;
        while(temp2>0)
        {
            rem2=temp2%10;
            sum=sum+pow(rem2,c);
            c--;
            temp2=temp2/10;
        }
    if(sum==n)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    
}