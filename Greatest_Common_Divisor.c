#include<stdio.h>
int main()
{
    int n,m,max=9999,i;
    scanf("%d%d",&n,&m);
    max=n<m?n:m;
    for(i=max;;i--)
    {
        if(n%i==0 && m%i==0)
        {
        printf("%d",i);
        break;
        }
    }
}