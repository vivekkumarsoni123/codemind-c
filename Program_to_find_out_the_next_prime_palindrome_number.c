#include<stdio.h>
int prime(int n)
{
    int i,c=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        c++;
    }
    if(c==2) return 1;
    else return 0;
}
int pal(int n)
{
    int r,s=0,q;
    q=n;
    while(n!=0)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    if(s==q) return 1;
    else return 0;
}
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=n+1;;i++)
    {
        if(prime(i)&&pal(i))
        {
            printf("%d",i);
            break;
        }
    }
}