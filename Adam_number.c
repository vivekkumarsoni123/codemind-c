#include<stdio.h>
int main(){
    int n,s=0;
    scanf("%d",&n);
    int sq=n*n;
    while(n){
        int r=n%10;
        s=s*10+r;
        n=n/10;
    }
    int k=s*s;
    int b=0;
    while(k){
        int a=k%10;
        b=b*10+a;
        k=k/10;
    }
    if(b==sq) printf("True");
    else printf("False");
}