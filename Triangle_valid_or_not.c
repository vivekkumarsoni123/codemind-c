#include<stdio.h>
int main()
{
    int n,m,k;
    scanf("%d%d%d",&n,&m,&k);
    if(n+m>k&&m+k>n&&k+n>m)printf("Valid triangle");
    else printf("Invalid triangle");
}