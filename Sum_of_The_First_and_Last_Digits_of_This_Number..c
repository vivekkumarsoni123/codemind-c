#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        int m,q,s=0,t;
        scanf("%d",&m);
        q=m%10;
        while(m!=0)
        {
            s=s*10+m%10;
            m/=10;
        }
        t=s%10;
        printf("%d
",q+t);
    }
}