#include<stdio.h>
int main()
{
    int n,i,c=99,s=0,a;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    {
    scanf("%d",&x[i]);
    if(x[i]<c)c=x[i];
    }
    printf("%d",c);
}