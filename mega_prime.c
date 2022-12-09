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
    int n,r,c=0,ct=0;
    scanf("%d",&n);
    if(prime(n))
    {
    while(n!=0)
    {
        c++;
        r=n%10;
        if(prime(r))
            ct++;
        n=n/10;
    }
        if(c==ct)
        printf("Mega Prime");
        else printf("Not Mega Prime");
    }
    else printf("Not Mega Prime");
}