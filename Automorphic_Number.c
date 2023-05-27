#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int s=n*n;
    while(n){
        if(n%10 != s%10){
            printf("Not an Automorphic Number");
            break;
        }
        n=n/10;
        s=s/10;
    }
    if(n==0) printf("Automorphic Number");
}