#include<stdio.h>
int main()
{
    int n,i,c=0;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    scanf("%d",&x[i]);
    int m;
    scanf("%d",&m);
    for(i=0;i<n;i++)
    {
        if(x[i]==m)
        {
            c++;
            printf("%d ",i);
        }
    }
    if(c==0)printf("-1");
}