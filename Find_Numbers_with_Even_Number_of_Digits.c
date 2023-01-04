#include<stdio.h>
int main()
{
        int n,c,t=0,q,j,r;
        scanf("%d",&n);
        int x[n];
        for(j=0;j<n;j++)
        scanf("%d",&x[j]);
        for(j=0;j<n;j++)
        {
            c=0;
            q=x[j];
            while(q!=0)
            {
                r=q%10;
                c++;
                q/=10;
            }
            if(c%2==0)t++;
        }
        printf("%d",t);
}