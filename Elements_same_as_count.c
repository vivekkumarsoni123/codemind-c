#include<stdio.h>
int main()
{
    int n,i,j,brr[100000],size=0,c,k=0;
    float av,s=0;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        int flag=0;
        scanf("%d",&arr[i]);
        for(j=0;j<=size;j++)
        {
            if(arr[i]==brr[j])
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
        {
            brr[size]=arr[i];
            size++;
        }
    }
    for(j=0;j<size;j++)
    {
        c=0;
        for(i=0;i<n;i++)
        {
            if(brr[j]==arr[i]) c++;
        }
        if(c==brr[j]){
            printf("%d ",brr[j]);
            k++;
        }
    }
    if(k==0)printf("-1");
}