#include<stdio.h>
int main()
{
    int n,m,i,c=0;
    scanf("%d%d",&n,&m);
    for(i=n;i<=m;i++)
    {
        if(i%6==0)
        c++;
        }
        printf("%d ",c);
}