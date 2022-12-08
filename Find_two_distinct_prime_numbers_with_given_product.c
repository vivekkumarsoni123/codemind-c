#include<stdio.h>
int prime(int n)
{
    int i,c=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        c++;
    }
    if(c==2)return 1;
    else return 0;
}
int main()
{
    int n,i,c=0;
    scanf("%d",&n);
    for(i=2;i<=n/2;i++)
    {
        if(n%i==0 &&prime(i)&&prime(n/i)){
        printf("%d %d",i,n/i);
        c=1;
        break;
        }
    }
    if(c==0){
        printf("-1");
    }
}