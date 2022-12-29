// Online C compiler to run C program onli
#include<stdio.h>
int fib(int n)
{
    int d=0,i,a=0,b=1,c;
    for(i=1;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        if(n==c)
        {
            d++;
        }
    }
    if(d==0)return 0;
        else return 1;
}
int main()
{
    int k,i,n,d1=0,d2=0,np1=0,np2=0,t;
     scanf("%d",&t);
        for(k=t;;k++)
        {
            if(fib(k))
            {
                d1=k-t;
                np1=k;
                break;
            }
        }
        for(k=t-1;;k--)
        {
            if(fib(k))
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
        else printf("%d %d",np2,np1);
}