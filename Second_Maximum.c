#include<stdio.h>
int main()
{
    int k,i;
    scanf("%d",&k);
    for(i=0;i<k;i++)
    {
        int n,m,max,l;
        scanf("%d%d%d",&n,&m,&l);
        if(n>m&&n<l||n>l&&n<m)printf("%d
",n);
        else if(m>n&&m<l||m>l&&m<n)printf("%d
",m);
        else printf("%d
",l);
    }
}