#include<stdio.h>
int main()
{
    int n,sum=0,r;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        n=n/10;
        sum=sum+r*r;
        if(n==0&&sum>9)
        {
            n=sum;
            sum=0;
        }
    }
    if(sum==1||sum==7)printf("True");
    else printf("False");
}