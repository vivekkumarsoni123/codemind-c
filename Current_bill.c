#include<stdio.h>
int main()
{
    int n,m,k,s;
    scanf("%d%d%d",&n,&m,&k);
    if(n<200) s=n*1.20;
    else if(n>=200&&n<400)s=n*1.50;
    else if(n>=400&&n<600)s=n*1.80;
    else if(n>=600)s=n*2.00;
    if(s>=400)printf("%.2f",(float)s+0.15*s);
    else if(s<400)printf("%.2f",(float)s+100);
}