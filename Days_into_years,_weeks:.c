#include<stdio.h>
#include<math.h>
int main()
{
    int n,y,w;
    scanf("%d",&n);
    y=n/365;
    w=n%365/7;
    printf("%d
",y);
    printf("%d",w);
}