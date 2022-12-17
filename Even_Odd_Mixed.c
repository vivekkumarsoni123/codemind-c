#include<stdio.h>
int main()
{
    int n,c=0,r,tc=0,ct=0;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        if(r%2==0)ct++;
        else tc++;
        n=n/10;
    }
    if(ct==0&&tc!=0)printf("Odd");
    else if(tc==0&&ct!=0)printf("Even");
    else printf("Mixed");
}