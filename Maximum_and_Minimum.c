#include<stdio.h>
int main()
{
    int n,y[100],i,j,max=0,size=0,c,ct,t=0,q=99999;
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
    {
        c=0;
        for(i=0;i<n;i++)
        {
            if(y[j]==x[i]) 
            {
                c++;
            }
        }
        if(c==y[j]&&y[j]>=max) max=y[j];
    }
    for(j=0;j<size;j++)
    {
        ct=0;
        for(i=0;i<n;i++)
        {
            if(y[j]==x[i]) ct++;
        }
        if(ct==y[j]&&y[j]<q) q=y[j];
    }
    if(q==99999)printf("-1");
    else printf("%d %d",q,max);
}