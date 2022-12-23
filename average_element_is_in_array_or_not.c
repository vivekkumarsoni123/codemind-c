#include<stdio.h>
int main()
{
    int n,i,c=0,s=0,a;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    {
    scanf("%d",&x[i]);
    c=c+x[i];
    }
    for(i=0;i<n;i++)
    {
        a=c/n;
        if(x[i]==a)s++;
    }
    if(s>=1)printf("True");
    else printf("False");
}