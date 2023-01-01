#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int m;
        scanf("%d",&m);
        if(m<3)printf("LIGHT
");
        else if(m>=3&&m<7)printf("MODERATE
");
        else printf("HEAVY
");
    }
}