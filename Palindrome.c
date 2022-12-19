#include<stdio.h>
int main()
{
    int n,m,q,r,s=0;
    scanf("%d",&n);
    q=n;
    while(q!=0)
    {
        r=q%10;
        s=s*10+r;
        q=q/10;
    }
    if(n==s)
    {
        printf("Palindrome");
    }
    else
    {
        printf("Not Palindrome");
    }
}