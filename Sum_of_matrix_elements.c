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
            s+=x[i][j];
        }
    }
    printf("%d",s);
}