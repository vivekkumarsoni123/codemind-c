#include<stdio.h>
int main()
{
    int m,i;
    scanf("%d",&m);
    for(i=1;i<=m;i++)
    {
        int n,k,j,r,c=0;
        scanf("%d%d",&n,&k);
        for(j=n;j<=k;j++)
        {
            r=j%10;
            if(r==2||r==3||r==9)
            c++;
        }
        printf("%d
",c);
    }
}