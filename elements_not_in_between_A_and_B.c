#include<stdio.h>
int main()
{
    int n,a,b,i,j,size=0,t=0;
    scanf("%d",&n);
    int x[n],y[n];
    for(i=0;i<n;i++){
    scanf("%d",&x[i]);}
    scanf("%d%d",&a,&b);
    for(i=0;i<n;i++)
    {
        int f=0;
        for(j=0;j<size;j++)
        {
            if(x[i]==y[j]){
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
        if(y[j]<a||y[j]>b) 
        {
            printf("%d ",y[j]);
            t++;
        }
    } 
    if(t==0)printf("-1");
}