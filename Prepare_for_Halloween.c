#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int k,m;
        scanf("%d%d",&k,&m);
        if(2*k<5*m)printf("Candy
");
        else if(2*k>5*m)printf("Chocolate
");
        else printf("Either
");
    }
}