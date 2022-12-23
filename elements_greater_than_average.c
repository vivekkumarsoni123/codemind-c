#include<stdio.h>
int main()
{
    int n,i,c=0,s=0,a;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    {
    scanf("%d",&x[i]);
    s=s+x[i];
    }
    for(i=0;i<n;i++)
    {
        a=s/n;
        if(x[i]>=a)c++;
    }
    printf("%d",c);
}