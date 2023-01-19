#include<stdio.h>
int main()
{
    int n,i,k,c=0;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    scanf("%d",&x[i]);
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(x[i]==k){
            printf("%d ",i);
            c++;
            break;
        }
    }
    for(i=n-1;i>=0;i--)
    {
        if(x[i]==k){
            printf("%d",i);
            c++;
            break;
        }
    }
    if(c==0)printf("-1 -1");
}