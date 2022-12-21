#include<stdio.h>
int main()
{
    int n,m,i,k,s=0,l;
    scanf("%d%d%d%d",&n,&m,&k,&l);
    for(i=n;i<=m;i++)
    {
        if(i%k==0&&i%l!=0)
        {
            s=s+i;
        }
    }
    printf("%d",s);
}