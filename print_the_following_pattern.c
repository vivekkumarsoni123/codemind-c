#include<stdio.h>
int main()
{
    int n,i,j;
    scanf("%d",&n);
    for(i=65+(n-1);i>=65;i--)
    {
        for(j=65;j<=i;j++)
        {
            printf("%c ",i);
        }
        printf("
");
    }
}