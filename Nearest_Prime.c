#include<stdio.h>
int prime(int n)
{
    int i,c=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        c++;
    }
    if(c==2)return 1;
    else return 0;
}
int main()
{
    int k,j;
    scanf("%d",&k);
    for(j=1;j<=k;j++)
    {
    int n,d1=0,d2=0,np1=0,np2=0,i;
    scanf("%d",&n);
    for(i=n;;i++)
    {
        if(prime(i))
        {
            d1=i-n;
            np1=i;
            break;
        }
    }
    for(i=n-1;;i--)
    {
        if(prime(i))
        {
            d2=n-i;
            np2=i;
            break;
        }
    }
    if(d1<d2)printf("%d
",np1);
    else if(d2<d1)printf("%d
",np2);
    else printf("%d
",np2);
    }
}