#include<stdio.h>
int main()
{
    int n;
    float s;
    scanf("%d",&n);
    if(n<200) s=n*1.20;
    else if(n>=200&&n<400) s=n*1.50;
    else if(n>=400&&n<600) s=n*1.80;
    else s=n*2.00;
    if(s<=400)printf("%.2f",s+100);
    else printf("%.2f",s+(.15*s));
}