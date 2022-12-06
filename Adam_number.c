#include<stdio.h>
int main(){
    int n,r,s=0,a,b,q,w=0;
    scanf("%d",&n);
    a=n*n;
    while(n!=0)
    {
        r=n%10;
        s=s*10+r;
        n=n/10;
    }
    b=s*s;
    while(b!=0)
    {
        q=b%10;
        w=w*10+q;
        b=b/10;
    }
    if(w==a)printf("True");
    else printf("False");
}
