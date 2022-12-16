#include<stdio.h>
int main()
{
    int n,i,j,max=9999,c;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    {
    scanf("%d",&x[i]);
    if(x[i]<max)
    max=x[i];
    }
    for(j=max;j>=1;j--)
    {
        c=0;
        for(i=0;i<n;i++)
        {
            if(x[i]%j==0)
            {
            c++;
            }
        }
    if(c==n)
    {
        printf("%d",j);
        break;
    }
    }
}