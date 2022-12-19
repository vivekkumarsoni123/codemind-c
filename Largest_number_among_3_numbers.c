#include<stdio.h>
int main()
{
    int n,m,k;
    scanf("%d%d%d",&n,&m,&k);
    if(n>m&&n>k)printf("%d",n);
    else if(m>k&&m>n)printf("%d",m);
    else printf("%d",k);
    
}