#include<stdio.h>
int main()
{
    int k,t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i;
        scanf("%d",&n);
        int x[n],y[n],s=0,f=1,q=n-1;
        for(i=0;i<n;i++)
        scanf("%d",&x[i]);
        for(i=0;i<n;i++)
        {
            if(f)
            {
                y[i]=x[q--];
            }
            else y[i]=x[s++];
            f=!f;
        }
        for(i=0;i<n-1;i++)
        {
            printf("%d ",y[i]);
        }
        printf("%d
",y[n-1]);
    }
}