#include<stdio.h>
int main()
{
    int n,k1=3,k2=-2,i,p;
    scanf("%d",&n);
    for(i=1;i<=n+1;i++)
    {
        if(i%2!=0)
        {
             printf("%d ",k1);
            p=3*k1-4;
            k1=p;
        }
        else 
        {
            printf("%d ",k2);
            p=5*k2+12;
            k2=p;
        }
    }
}