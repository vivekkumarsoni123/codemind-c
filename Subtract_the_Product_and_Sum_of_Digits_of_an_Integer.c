#include<stdio.h>
int main()
{
    int n,s=0,p=1,r;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        s+=r;
        p*=r;
        n/=10;
    }
    printf("%d",p-s);
}