#include<stdio.h>
int main()
{
    int n,m,k,c,d;
    scanf("%d%d%d",&n,&m,&k);
    c=n%(m*k);
    d=n/(m*k);
    if(c==0)printf("%d",d);
    else printf("%d",d+1);
}