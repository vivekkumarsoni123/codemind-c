#include<stdio.h>
int main()
{
    int n,i,j,c=0,t=0;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    scanf("%d",&x[i]);
    for(i=0;i<n;i++)
    {
        c=0;
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
            if(x[i]==x[j]) c++;
            }
        }
        if(c==0)printf("%d ",x[i]);
        else t++;
    }
    if(t==n)printf("-1");
}