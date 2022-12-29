#include<stdio.h>
int main()
{
    int n,r,b,t,s=0;
    scanf("%d",&n);
    r=n%1000;
    b=n-r;
    while(r!=0)
    {
        t=r%10;
        s=s*10+t;
        r/=10;
    }
    printf("%d",b+s);
}