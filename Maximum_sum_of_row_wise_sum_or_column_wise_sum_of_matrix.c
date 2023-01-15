#include<stdio.h>
int main()
{
    int n,m,i,j,s=0,sm=0,k,max=0,mx=0;
    scanf("%d%d",&n,&m);
    int x[n][m];
    for(i=0;i<n;i++)
    {
        s=0;
        for(j=0;j<m;j++)
        {
            scanf("%d",&x[i][j]);
            s+=x[i][j];
        }
        if(s>max) max=s;
    }
    for(j=0;j<m;j++)
    { 
        sm=0;
        for(i=0;i<n;i++)
        {
            sm+=x[i][j];
        }
        if(sm>mx) mx=sm;
    }
    k=max>mx?max:mx;
    printf("%d",k);
}