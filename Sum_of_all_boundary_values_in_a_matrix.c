#include<stdio.h>
int main()
{
    int n,m,i,j,s=0;
    scanf("%d%d",&n,&m);
    int x[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&x[i][j]);
            if(i==0||i==n-1||j==0||j==m-1) s+=x[i][j];
        }
    }
    printf("%d",s);
}