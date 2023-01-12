#include<stdio.h>
int main()
{
    int i,j,n,s;
    scanf("%d",&n);
    int x[n],y[n],k[n];
    for(i=0;i<n;i++)
    scanf("%d",&x[i]);
    for(i=0;i<n;i++)
    scanf("%d",&y[i]);
    for(i=0;i<n;i++)
    {
        k[i]=x[i]+y[i];
    }
    for(i=0;i<n;i++)
        printf("%d ",k[i]);
}