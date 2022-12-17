#include<stdio.h>
int main()
{
    int n,m,i,q,s;
    scanf("%d%d",&n,&m);
    for(i=n;i<=m;i++)
    {
        q=i;
        s=0;
        while(q!=0)
        {
            s=s*10+q%10;
            q/=10;
        }
        if(i==s)printf("%d ",i);
    }
}