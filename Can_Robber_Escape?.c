#include<stdio.h>
int main()
{
    int n,i,t=0,max=0;
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
        if(n>x[i])
        {
        t++;
        }
    }
    if(n==t)printf("YES");
    else printf("NO");
}