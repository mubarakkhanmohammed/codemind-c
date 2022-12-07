#include<stdio.h>
int main()
{
    int n,min;
    scanf("%d",&n);
    int a[n],i;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    min=0;
    for(int i=0;i<n;i++)
    {
        min=a[i];
    }
    printf("%d",min);
}