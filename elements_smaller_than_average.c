#include<stdio.h>
int main()
{
    int n,i,s=0,a,c=0;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    scanf("%d",&x[i]);
    for(i=0;i<n;i++)
    {
        s=s+x[i];
    }
    a=s/n;
    for(i=0;i<n;i++)
    {
    if(x[i]<=a)
    {
        c++;
    }
    }
    printf("%d",c);
}