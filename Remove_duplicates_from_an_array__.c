#include<stdio.h>
int main()
{
    int n,i,j,s=0,y[100];
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    {
        int f=0;
        scanf("%d",&x[i]);
        for(j=0;j<s;j++)
        {
            if(x[i]==y[j])
            {
                f=1;
                break;
            }
        }
        if(f==0)
        {
            y[j]=x[i];
            s++;
        }
    }
    for(j=0;j<s;j++)
    printf("%d ",y[j]);
}
