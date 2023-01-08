#include<stdio.h>
int main()
{
    int i,n,c=0,t=0,j;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    scanf("%d",&x[i]);
    for(i=0;i<n;i++)
    {
        c=0;
        t=0;
       for(j=i+1;j<n;j++)
       {
           if(x[j]>x[i])
           {
               c++;
               break;
           }
           else {
               t++;
           }
       }
       if(t==0)printf("%d ",c);
       else if(c==0)printf("0 ");
       else printf("%d ",t+c);
    }
}