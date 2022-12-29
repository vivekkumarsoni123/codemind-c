#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n!=1)
    {
        if(n%2==0)
        {
            printf("%d ",n);
            n/=2;
        }
        else
        {
            printf("%d ",n);
            n=3*n+1;
        }
    }
    printf("1");
}