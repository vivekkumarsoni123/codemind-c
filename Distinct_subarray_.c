#include<stdio.h>
int main()
{
    int n,i,j,m,s=0,c=0;
    scanf("%d%d",&n,&m);
    for(i=n;i<=m;i++)
    {
        s=0;
       for(j=i;j<=m;j++)
       {
          s+=j;
          if(s%2!=0)
          {
              c++;
          }
       }
    }
    printf("%d",c);
}