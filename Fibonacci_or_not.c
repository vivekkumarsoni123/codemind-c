#include<stdio.h>
int main()
{
    int n,a=0,b=1,c,cnt=0,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    c=a+b;
    if(c==n)
    {
        cnt++;
    }
    
    a=b;
    b=c;
}
    if(cnt==0)printf("False");
    else printf("True");
}