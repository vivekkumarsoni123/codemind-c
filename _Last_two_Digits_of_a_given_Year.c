#include<stdio.h>
int main()
{
    int n,a;
    scanf("%d",&n);
    a=n%100;
    if(a<=9)printf("0%d",a);
    else printf("%d",a);
}