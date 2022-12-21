#include<stdio.h>
int main(){
    int n,sq;
    scanf("%d",&n);
    sq=n*n;
    while(n>0)
    {
        if((n%10)==(sq%10))
        {
            n=n/10;
            sq=sq/10;
        }
        else break;
    }
        if(n==0)printf("Automorphic Number");
        else printf("Not an Automorphic Number");
}