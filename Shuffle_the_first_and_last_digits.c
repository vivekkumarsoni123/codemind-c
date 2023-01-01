#include<stdio.h>
#include<math.h>
int main()
{
    long long int n,a,b,s=0,c=0,e,d,f,g,h,q;
    scanf("%lld",&n);
    a=n%10;
    b=n-a;
    q=b;
    while(b!=0)
    {
        c++;
        s=s*10+b%10;
        b/=10;
    }
    e=s%10;
    g=pow(10,c-1);
    d=q%g;
    h=pow(10,c-1);
    f=a*h+d+e;
    printf("%lld",f);
}