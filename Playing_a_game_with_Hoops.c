#include<stdio.h>
int main()
{
    int m,i;
    scanf("%d",&m);
    for(i=1;i<=m;i++)
    {
        int n;
        scanf("%d",&n);
        if(n%2!=0)printf("%d
",n/2 +1);
        else printf("%d
",n/2);
    }
}