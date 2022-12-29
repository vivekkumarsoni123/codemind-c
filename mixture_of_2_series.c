#include<stdio.h>
int main()
{
    int n,k1=0,k2=0,i,p;
    scanf("%d",&n);
    for(i=1;i<=n+1;i++)
    {
        if(i%2!=0)
        {
            p=2*k1;
            printf("%d ",p);
            k1++;
        }
        else 
        {
            p=1*k2;
            printf("%d ",p);
            k2++;
        }
    }
}