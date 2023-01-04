#include<stdio.h>
#include<math.h>
int main()
{
        int n,j,s=0,t=0,p;
        scanf("%d",&n);
        int x[n];
        for(j=0;j<n;j++)
        {
        scanf("%d",&x[j]);
        if(j%2!=0) s+=x[j];
        else t+=x[j];
        }
        p=abs(s-t);
        if(p%4==0) printf("X");
        else printf("Y");
}