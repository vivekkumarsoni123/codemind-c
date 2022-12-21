#include<stdio.h>
int main()
{
    int n,m,k,l;
    scanf("%d%d%d%d",&n,&m,&k,&l);
    if(n==m||n==k||n==l||n==m+k||n==m+l||n==k+l||n==n+m+l)printf("YES");
    else printf("NO");
}