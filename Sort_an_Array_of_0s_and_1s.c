#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
        if(x[i]==0)printf("%d ",x[i]);
    }
    for(i=0;i<n;i++)
    {
        if(x[i]==1)printf("%d ",x[i]);
    }
}