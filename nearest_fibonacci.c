// Online C compiler to run C program onli
#include<stdio.h>
int fib(int n)
{
    int a=0,b=1,c,ct=0,i;
    for(i=1;i<=n;i++)
    {
        c=a+b;
        a=b;
        b=c;
        if(c==n)
        ct++;
    }
    if(ct==0)return 0;
    else return 1;
}
int main()
{
        int k,d1=0,d2=0,np1=0,np2=0,n;
        scanf("%d",&n);
        for(k=n;;k++)
        {
            if(fib(k))
            {
                d1=k-n;
                np1=k;
                break;
            }
        }
        for(k=n-1;;k--)
        {
            if(fib(k))
            {
                d2=n-k;
                np2=k;
                break;
            }
        }
        if(d1<d2)printf("%d
",np1);
        else if(d2<d1)printf("%d
",np2);
        else printf("%d %d
",np2,np1);
}