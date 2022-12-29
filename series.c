#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,k1=1,k2=0,p;
    scanf("%d",&n);
    for(i=1;i<=n+1;i++)
    {
        if(i%2!=0)
        {
            p=pow(2,k1)-1;
            printf("%d ",p);
            k1++;
        }
        else 
        {
            p=k2*3+2;
            printf("%d ",p);
            k2=p;
        }
    }
}