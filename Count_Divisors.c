#include<stdio.h>
int main()
{
    int n,i,t,c=0,j;
    scanf("%d%d%d",&n,&i,&t);
    for(j=n;j<=i;j++)
    {
        if(j%t==0)c++;
    }
        printf("%d",c);
}