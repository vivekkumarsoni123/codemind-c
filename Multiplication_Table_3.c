#include<stdio.h>
int main()
{
    int n,m,i,k,s=0,t=0;
    scanf("%d%d%d",&n,&m,&k);
    for(i=m;i<=k;i++)
    {
        printf("%d x %d = %d
",n,i,n*i);
    }
}