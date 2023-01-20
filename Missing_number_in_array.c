#include<stdio.h>
int main()
{
    int m,j;
    scanf("%d",&m);
    for(j=0;j<m;j++)
    {
       int n,i,k,t=0,p=0;
       scanf("%d",&n);
       int x[n-1],f=0;
       for(i=0;i<n-1;i++)
       scanf("%d",&x[i]);
       for(i=0;i<n-1;i++)
       {
           for(k=i+1;k<n-1;k++)
           {
               if(x[i]>x[k])
               {
                   t=x[i];
                   x[i]=x[k];
                   x[k]=t;
               }
           }
       }
       for(i=0;i<n-1;i++)
       {
               if(x[i]!=i+1)
               {
                   printf("%d
",i+1);
                   p++;
                   break;
               }
       }
       if(p==0)printf("%d
",n);
    }
}
        
        