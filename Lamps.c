#include<stdio.h>
int main()
{
    int n,m,k,l;
    scanf("%d%d%d%d",&n,&m,&k,&l);
    if(k<=l)printf("%d",k*n);
    else printf("%d",k*m+(n-m)*l);
}