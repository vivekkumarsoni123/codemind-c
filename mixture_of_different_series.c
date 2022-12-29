#include<stdio.h>
#include<math.h>
int main()
{
    int n,k1=0,k2=0,i,p;
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
            p=pow(3,k2)-1;
            printf("%d ",p);
            k2++;
        }
    }
}