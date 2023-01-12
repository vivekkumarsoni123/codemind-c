#include<stdio.h>
int main()
{
    int i,j,n;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
        scanf("%d",&x[i]);
    for(i=0;i<n-1;i++)
    {
        int max=0;
        for(j=i+1;j<n;j++)
        {
            if(x[j]>max)
            {
                max=x[j];
            }
        }
        printf("%d ",max);
    }
    printf("-1");
}