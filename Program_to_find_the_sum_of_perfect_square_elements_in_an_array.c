#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,j,s=0,p,t;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    scanf("%d",&x[i]);
    for(i=0;i<n;i++)
    {
        p=sqrt(x[i]);
        t=p*p;
        if(t==x[i])
        {
            s+=x[i];
        }
    }
        printf("%d",s);
    }