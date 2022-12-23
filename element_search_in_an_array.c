#include<stdio.h>
int main()
{
    int n,i,c=0,s=0;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    scanf("%d",&x[i]);
    int a;
    scanf("%d",&a);
    for(i=0;i<n;i++)
    {
    if(x[i]==a) c++;
    }
    if(c>=1)
    printf("True");
    else printf("False");
}