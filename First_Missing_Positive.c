#include<stdio.h>
int main()
{
    int i,j,n,temp=0,max=0,k;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
        scanf("%d",&x[i]);
        for(k=1;;k++)
        {
            int c=0;
            for(i=0;i<n;i++)
            {
            if(k==x[i]) 
            c++;
            }
            if(c==0){
                printf("%d",k);
                break;
            }
        }
}