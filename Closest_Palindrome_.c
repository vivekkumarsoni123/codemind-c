#include<stdio.h>
int pal(int n)
{
    int r,s=0,p;
    p=n;
    while(n!=0)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    if(s==p)return 1;
    else return 0;
}
int main()
{
    int n,i,d1=0,d2=0,np1=0,np2=0;
    scanf("%d",&n);
    for(i=n+1;;i++)
    {
        if(pal(i))
        {
            np1=i;
            d1=i-n;
            break;
        }
    }
    for(i=n-1;;i--)
    {
        if(pal(i))
        {
            np2=i;
            d2=n-i;
            break;
        }
    }
    if(d1<d2)printf("%d",np1);
    else if(d2<d1)printf("%d",np2);
    else printf("%d %d",np2,np1);
}