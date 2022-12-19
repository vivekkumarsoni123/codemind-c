#include<stdio.h>
int main()
{
    int n,m,k;
    scanf("%d%d%d",&n,&m,&k);
    printf("%d",((k-(n+m))/n)+1);
}