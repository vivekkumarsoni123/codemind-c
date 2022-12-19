#include<stdio.h>
int main()
{
    int n,m,k;
    scanf("%d%d%d",&n,&m,&k);
    printf("%d KB",(2*n*m*k*512)/1024);
}