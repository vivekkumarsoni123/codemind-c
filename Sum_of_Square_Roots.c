#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,k,l;
    int i;
    float s=0;
    scanf("%d%d",&n,&m);
    for(i=n;i<=m;i++)
    {
            s=(s+sqrt(i));
    }
    printf("%.2f",s);
}