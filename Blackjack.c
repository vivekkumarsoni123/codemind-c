#include<stdio.h>
int main()
{
    int n,m,c;
    scanf("%d%d",&n,&m);
    c=21-(n+m);
    if(c>=1&&c<=10)printf("%d",c);
    else printf("-1");
}