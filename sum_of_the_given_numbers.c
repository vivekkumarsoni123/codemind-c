#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int a,b,sum;
        scanf("%d%d",&a,&b);
        sum=a+b;
        printf("%d
",sum);
    }
}