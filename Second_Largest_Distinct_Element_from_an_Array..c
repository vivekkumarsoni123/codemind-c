#include<stdio.h>
int main()
{
    int n,i,j,temp=0;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    scanf("%d",&x[i]);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
        if(x[i]<x[j])
        {
            temp=x[i];
            x[i]=x[j];
            x[j]=temp;
        }
        }
    }
    for(i=0;i<n;i++)
    {
        if(x[i]!=x[i+1])
        {
    printf("%d",x[i+1]);
    break;
        }
    }
}