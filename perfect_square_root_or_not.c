#include<stdio.h>
#include<math.h>
int main()
{
    int n,d,e;
    scanf("%d",&n);
    d=sqrt(n);
    if(d*d==n)
    printf("True");
    else printf("False");
}