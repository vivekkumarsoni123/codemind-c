#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,k,d;
    scanf("%d%d%d",&n,&m,&k);
    d=pow(n,m);
    printf("%d",d%k);
}