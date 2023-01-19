#include<stdio.h>
int main()
{
    int n,y[100],i,j,size=0,t=0;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    {
        int f=0;
        scanf("%d",&x[i]);
        for(j=0;j<size;j++)
        {
            if(x[i]==y[j])
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
    if(size>2) {
     for(j=0;j<size;j++)
     {
        for(int k=i+1;k<size;k++)
        {
            if(y[j]<y[k])
            {
                t=y[j];
                y[j]=y[k];
                y[k]=t;
            }
        }
     }
     printf("%d",y[2]);
    }
    else printf("%d",y[0]>y[1]?y[0]:y[1]);
}