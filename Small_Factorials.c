#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n!=0)
    {
        n--;
        int k,i,f=1;
        scanf("%d",&k);
        for(i=1;i<=k;i++)
        {
            f*=i;
        }
        printf("%d
",f);
    }
}