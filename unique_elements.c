#include<stdio.h>
int main()
{
    int n,y[100],i,j,max=0,size=0;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    {
        int f=0;
        scanf("%d",&x[i]);
        for(j=0;j<size;j++)
        {
            if(x[i]==x[j])
            {
                f=1;
                break;
            }
        }
        if(f==0){
            y[size]=x[i];
            size++;
        }
    }
    for(j=0;j<size;j++)
    printf("%d ",y[j]);
}