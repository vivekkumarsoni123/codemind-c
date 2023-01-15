#include<stdio.h>
int main()
{
    int n,i,j,t=0,size=0,c,k,y[100];
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++){
        scanf("%d",&x[i]);
    }
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        int f=0;
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
    for(j=0;j<size;j++)
    {
        c=0;
        for(i=0;i<n;i++)
        {
            if(y[j]==x[i]) c++;
        }
        if(c==k) 
        {
            printf("%d ",y[j]);
            t++;
        }
    }
    if(t==0) printf("-1");
}