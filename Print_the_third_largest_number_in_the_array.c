#include<stdio.h>
int main()
{
    int n,i,j,k,t,y[100];
    scanf("%d",&n);
    int x[n],s=0;
    int q=n;
    for(i=0;i<n;i++)
    scanf("%d",&x[i]);
    if(n>=4&&n<100){
    for(i=0;i<n;i++)
    {
        int f=0;
        for(j=0;j<s;j++)
        {
            if(x[i]==x[j])
            {
                f=1;
                break;
            }
        }
        if(f==0)
        {
            y[s]=x[i];
            s++;
        }
    }
    for(j=0;j<s;j++)
    {
        for(k=j+1;k<s;k++)
        {
            if(y[j]<y[k])
            {
                t=y[j];
                y[j]=y[k];
                y[k]=t;
            }
        }
    }
    if(s>=3){
    printf("%d",y[2]);
    }
    else printf("It is not possible");
    }
    else printf("It is not possible");
}