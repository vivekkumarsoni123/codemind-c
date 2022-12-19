#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n<=10000)printf("%.2f",(float)2*n);
    else if(n<=20000)printf("%.2f",(float)n+0.9*n+0.25*n);
    else if(n>20000)printf("%.2f",(float)n+0.95*n+0.3*n);
}