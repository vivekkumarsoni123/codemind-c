#include<stdio.h>
int main()
{
    int n,i,max=0;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    {
    scanf("%d",&x[i]);
    if(x[i]>max)
    max=x[i];
    }
    for(i=0;i<n;i++)
    {
        int k;
        scanf("%d",&k);
        if(x[i]+k>=max)printf("True ");
        else printf("False ");
    }
}