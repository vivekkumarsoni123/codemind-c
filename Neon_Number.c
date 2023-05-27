#include<stdio.h>
int main(){
    int n,sum=0;
    scanf("%d",&n);
    int s=n*n;
    while(s){
        int r=s%10;
        sum=sum+r;
        s=s/10;
    }
    if(sum==n) printf("Neon Number");
    else printf("Not Neon Number");
}