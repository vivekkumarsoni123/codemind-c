#include<stdio.h>
int main()
{
    int n,p,r,s=0;
    scanf("%d",&n);
    p=n;
    while(n!=0)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    if(p==s)printf("True");
    else printf("False");
}