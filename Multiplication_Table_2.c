#include<stdio.h>
int main()
{
    int n,m,i,k,s=0,t=0;
    scanf("%d%d",&n,&m);
    for(i=1;i<=m;i++)
    {
        printf("%d x %d = %d
",n,i,n*i);
    }
}