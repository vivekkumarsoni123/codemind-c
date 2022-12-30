#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int m,k,j;
        scanf("%d%d%d",&m,&k,&j);
        if(j>=m&&j<k)printf("YES
");
        else printf("NO
");
    }
}