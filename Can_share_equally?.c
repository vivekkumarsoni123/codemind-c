#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    if(n==0&&m%2==0||n!=0&&n%2==0)printf("YES");
    else printf("NO");
}