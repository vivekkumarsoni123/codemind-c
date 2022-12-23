#include<stdio.h>
int main()
{
    int n,i,c=0,s=0,a;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    {
    scanf("%d",&x[i]);
    if(x[i]%2==0)
    c++;
    }
    if(c==n)
    printf("True");
    else printf("False");
}