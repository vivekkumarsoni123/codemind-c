#include<stdio.h>
int main()
{
    int n,m,i,s=0,t=0;
    scanf("%d",&m);
    for(i=1;i<=m;i++)
    {
        s=s+i*i;
        t=t+i;
    }
    n=t*t;
    printf("%d",n-s);
}