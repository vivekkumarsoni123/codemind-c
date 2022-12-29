#include<stdio.h>
#include<math.h>
int main()
{
    int n,k1=1,k2=0,i,p=0,t;
    scanf("%d",&n);
    for(i=1;i<=n+1;i++)
    {
        if(i%2!=0)
        {
            t=pow(2,k1);
            printf("%d ",t);
            k1++;
        }
        else 
        {
            printf("%d ",p);
            p=pow(3,k2);
            k2++;
        }
    }
}