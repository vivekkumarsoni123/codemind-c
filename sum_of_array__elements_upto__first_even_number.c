#include<stdio.h>
int main()
{
    int n,i,s=0;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&x[i]);
        if(x[i]%2!=0)
        {
            s=s+x[i];
        }
        else break;
    }
    printf("%d",s);
}