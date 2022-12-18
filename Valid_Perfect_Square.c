#include<stdio.h>
#include<math.h>
int pq(int m)
{
    int c,d;
    c=sqrt(m);
    d=c*c;
    if(d==m)return 1;
    else return 0;
}
int main()
{
    int i,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int m;
        scanf("%d",&m);
        if(pq(m))printf("True
");
        else printf("False
");
    }
}