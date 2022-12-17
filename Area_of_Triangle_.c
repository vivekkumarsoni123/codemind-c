#include<stdio.h>
#include<math.h>
int main()
{
    int l,b,w;
    scanf("%d%d%d",&l,&b,&w);
    float c=(l+b+w)*.5;
    float a=sqrt(c*(c-l)*(c-b)*(c-w));
    printf("%.2f",a);
}