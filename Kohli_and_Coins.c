#include<stdio.h>
int main()
{
    int n,c,d;
    scanf("%d",&n);
    if(n%5==0)
    {
        c=n/10;
        d=(n%10)/5;
        printf("%d",c+d);
    }
    else printf("-1");
}