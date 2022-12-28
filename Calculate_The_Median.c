#include<stdio.h>
int main()
{
    int n,i,temp=0,j;
    scanf("%d",&n);
    int x[n];
    for(i=0;i<n;i++)
    scanf("%d",&x[i]);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(x[i]>x[j])
            {
                temp=x[i];
                x[i]=x[j];
                x[j]=temp;
            }
        }
    }
    // 
        //if(n%2!=0)
        printf("%d ",x[2]);
    //}
        //else if(n%2==0)
        // {
        //     printf("%d",x[])
        // }
}