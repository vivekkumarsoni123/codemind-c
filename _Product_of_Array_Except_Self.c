#include<stdio.h>
int main()
{
    int n,i,j,p;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    scanf("%d",&x[i]);
    for(i=0;i<n;i++)
    {
        p=1;
        for(j=0;j<n;j++)
        {
            if(i!=j)
            {
                p=p*x[j];
            }
        }
        printf("%d ",p);
    }
}