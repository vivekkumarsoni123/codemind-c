#include<stdio.h>
int main()
{
    int n,i,c=0;
    float a,s=0;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    {
    scanf("%d",&x[i]);
    s+=x[i];
    }
    a=s/n;
    printf("%.2f",float(a));
}