#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,p,d1,d2;
    scanf("%d",&n);
    i=0;
    p=0;
    while(p<=n)
    {
        i++;
        p=pow(2,i);
    }
    d1=abs(n-pow(2,i));
    d2=abs(n-pow(2,i-1));
    if(d1<d2)printf("%d",d1);
    else printf("%d",d2);
}