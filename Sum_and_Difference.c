#include<stdio.h>
int main()
{
    int a,b,s,dif;
    scanf("%d%d",&a,&b);
    s=a+b;
    dif=a-b;
    printf("%d %d
",s,dif);
    float a1,b1,s1,dif1;
    scanf("%f%f",&a1,&b1);
    s1=a1+b1;
    dif1=a1-b1;
    printf("%.1f %.1f",s1,dif1); 
}
