#include<stdio.h>
int main()
{
    int n,i,j,c;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    scanf("%d",&x[i]);
    int m,k,max=0;
    scanf("%d%d",&m,&k);
    for(i=0;i<n;i++)
    {
        if(x[i]>max) max=x[i];
    }
    if(max<m||max>k)printf("%d",max);
    else printf("-1");
}