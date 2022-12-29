// Online C compiler to run C program onli
#include<stdio.h>
int prime(int n)
{
    int d=0,i;
    for(i=2;i<=n;i++)
    {
        if(n%i==0)
        {
            d++;
        }
        
    }
    if(d==1)return 1;
        else return 0;
}
int main()
{
    int k,i,n,d1=0,d2=0,np1=0,np2=0,t;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&t);
        for(k=t;;k++)
        {
            if(prime(k))
            {
                d1=k-t;
                np1=k;
                break;
            }
        }
        for(k=t-1;;k--)
        {
            if(prime(k))
            {
                d2=t-k;
                np2=k;
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