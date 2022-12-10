#include<stdio.h>
int main()
{
    int n,q,r,s=0,f,i;
    scanf("%d",&n);
    q=n;
    while(n!=0)
    {
        f=1;
        r=n%10;
        for(i=1;i<=r;i++)
        {
            f=f*i;
        }
        s=s+f;
        n=n/10;
    }
    if(s==q)printf("The number %d is a strong number",q);
    else printf("The number %d is not a strong number",q);
}