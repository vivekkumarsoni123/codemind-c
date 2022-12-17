#include<stdio.h>
int fun(int n)
{
    int r=0,t=n;
    while(n)
    {
        r=r*10+n%10;
        n/=10;
    }
    int sum=t+r;
    int ans=sum,rev=0;
    while(ans)
    {
        rev=rev*10+ans%10;
        ans/=10;
    }
    if(rev==sum)
    {
        return sum;
    }
    else
    {
        return fun(rev);
    }
}
int main()
{
    int n;
    scanf("%d",&n);
    int res=fun(n);
    printf("%d",res);
}