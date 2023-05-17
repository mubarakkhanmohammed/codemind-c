#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[n],i,j,hcf;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	hcf=a[0];
	j=1;
	while(j<n)
	{
		if(a[j]%hcf==0)
		{
			j++;
		}
		else
		{
			hcf=a[j]%hcf;
			if(j!=0)
			{
				j--;
			}
		}
	}
	printf("%d ",hcf);
}