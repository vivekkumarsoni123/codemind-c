#include<stdio.h>
int main()
{
    int l,b,w,c,d,e;
    scanf("%d%d%d%d",&l,&b,&w,&c);
    d=l*b;
    e=(l+2*w)*(b+2*w);
    printf("%d",(e-d)*c);
}