#include<stdio.h>
int main()
{
    int n,i,c=0,s=0,a;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    {
    scanf("%d",&x[i]);
    if(i%2==0&&x[i]%2!=0)c++;
    else if(i%2!=0&&x[i]%2!=0)s++;
    }
    if(c==0)printf("True");
    else printf("False");
}