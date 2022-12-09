#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int k,q,r,s=0;
        scanf("%d",&k);
        q=k;
        while(k!=0)
        {
            r=k%10;
            s=s*10+r;
            k=k/10;
        }
        if(s==q)printf("True
");
        else printf("False
");
    }
}