#include<stdio.h>
int pal(int n)
{
    int r,q,s=0;
    q=n;
    while(n!=0)
    {
        s=s*10+n%10;
        n/=10;
    }
    if(s==q)return 1;
    else return 0;
}
int main()
{
    int n,c=0,i;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
        if(pal(x[i]))
        c++;
    }
    if(c==n)printf("1");
    else printf("0");
}