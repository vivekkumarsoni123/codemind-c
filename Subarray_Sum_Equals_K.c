#include<stdio.h>
int main()
{
    int n,m,i,j,c=0;
    scanf("%d%d",&n,&m);
    int x[n];
    for(i=0;i<n;i++)
    scanf("%d",&x[i]);
    for(i=0;i<n;i++)
    {
        int s=0;
        for(j=i;j<n;j++)
        {
            s+=x[j];
            if(s==m)
            {
                c++;
                break;
            }
        }
    }
    printf("%d",c);
}