#include<stdio.h>
int main()
{
    int n,i,j,c=0;
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
            if(x[i]>x[j]) c++;
            }
        }
        printf("%d ",c);
    }
}