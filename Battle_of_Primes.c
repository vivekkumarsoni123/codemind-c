#include<stdio.h>
int prime(int n)
{
    int i,c=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)c++;
    }
    if(c==2)return 1;
    else return 0;
}
int main()
{
    int n,m,i,t,d;
    scanf("%d%d",&n,&m);
    d=n+m;
    for(i=d+1;;i++)
    {
        if(prime(i))
        {
            t=i-d;
            printf("%d",t);
            break;
        }
    }
}