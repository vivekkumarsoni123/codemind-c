#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int m,k,l;
        scanf("%d%d%d",&m,&k,&l);
        if(m<k)printf("Too Early
");
        else if(m>l)printf("Too Late
");
        else printf("Take second dose now
");
    }
}