#include<stdio.h>
int main()
{
    int n;
    float s=0,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
         s=s+1/i;
    }
    printf("%.2f",s);
}