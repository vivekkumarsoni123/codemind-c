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
int main()
{
    int n;
    scanf("%d",&n);
    if(prime(n))
    {
        printf("Prime");
    }
    else printf("Not Prime");
}