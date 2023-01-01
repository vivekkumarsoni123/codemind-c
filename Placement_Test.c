#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int m,k;
        scanf("%d%d",&m,&k);
        printf("%d
",(m/10)*k);
    }
}