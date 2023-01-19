#include<stdio.h>
int main()
{
    int n,m,i;
    scanf("%d%d",&n,&m);
    int x[n];
    for(i=0;i<n;i++)
    scanf("%d",&x[i]);
    if(m<=n){
    for(i=m;i<n;i++)
    printf("%d ",x[i]);
    for(i=0;i<m;i++)
    printf("%d ",x[i]);
    }
}