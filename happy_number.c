#include<stdio.h>
int main(){
    int n,s=0;
    scanf("%d",&n);
    while(n){
        int r=n%10;
        s = s + r*r;
        n=n/10;
        if(n==0 && s>9){
            n=s;
            s=0;
        }
        else if(n==0 && s==1){
            printf("True");
            break;
        }
    }
    if(s!=1) printf("False");
}