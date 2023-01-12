#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,s=0,t;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
    }
    int p=0;
    for(i=n-1;i>=0;i--)
    {
        t=pow(2,p)*x[i];
        s+=t;
        p++;
    }
    printf("%d",s);
}