#include<stdio.h>
int main()
{
    int n,q,r,s=0;
    scanf("%d",&n);
    q=n*n;
    while(q!=0)
    {
        r=q%10;
        s=s+r;
        q=q/10;
    }
    if(s==n)printf("Neon Number");
    else printf("Not Neon Number");
}