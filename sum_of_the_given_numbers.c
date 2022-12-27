#include<stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    int a[n][2],i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<2;j++)
        {
        scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        sum=a[i][0]+a[i][1];
        printf("%d
",sum);
    }
}