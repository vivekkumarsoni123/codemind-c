#include<stdio.h>
int main()
{
    int n,s=0,i,r,c=0,t=0;
    scanf("%d",&n);
    while(n)
    {
        r=n%10;
        if(r%2==0) c++;
        else if(r%2!=0) t++;
        n/=10;
    }
    if(c==0)printf("Odd");
    else if(t==0)printf("Even");
    else printf("Mixed");
}