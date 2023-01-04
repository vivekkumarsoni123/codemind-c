#include<stdio.h>
int main()
{
        int n,i,j,temp=0;
        scanf("%d",&n);
        int x[n];
        for(j=0;j<n;j++)
        scanf("%d",&x[j]);
        for(i=0;i<n;i++)
        {
            x[i]=x[i]*x[i];
        }
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                if(x[i]>x[j])
                {
                    temp=x[i];
                    x[i]=x[j];
                    x[j]=temp;
                }
            }
            printf("%d ",x[i]);
        }
}