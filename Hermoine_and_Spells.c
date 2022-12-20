#include<stdio.h>
int main()
{
    int n,m,k;
    scanf("%d%d%d",&n,&m,&k);
    if(n<m&&n<k)printf("%d",m+k);
    else if(m<k&&m<n)printf("%d",k+n);
    else printf("%d",n+m);
}