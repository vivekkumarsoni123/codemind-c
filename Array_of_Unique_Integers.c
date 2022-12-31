#include<stdio.h>
int main()
{
    int n,i,j,temp=0;
    float s=0,a;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
        scanf("%d",&x[i]);
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
    }
    for(i=0;i<n;i++)
    {
        if(i>0&&i<n-1)
        s+=x[i];
    }
    a=s/(n-2.0);
    printf("%.5f",a);
}