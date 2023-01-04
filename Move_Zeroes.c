#include<stdio.h>
int main()
{
        int n,c,t=0,q,j,r;
        scanf("%d",&n);
        int x[n];
        for(j=0;j<n;j++)
        scanf("%d",&x[j]);
        for(j=0;j<n;j++)
        {
            if(x[j]!=0)printf("%d ",x[j]);
        }
        for(j=0;j<n;j++)
        {
            if(x[j]==0)printf("%d ",x[j]);
        }
}