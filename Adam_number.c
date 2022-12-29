#include<stdio.h>
int main()
{
    int n,q,r=0,t=0,s;
    scanf("%d",&n);
    q=n*n;
    while(n!=0)
    {
        r=r*10+n%10;
        n/=10;
    }
    s=r*r;
    while(s!=0)
    {
        t=t*10+s%10;
        s/=10;
    }
    if(q==t)printf("True");
    else printf("False");
}