#include<stdio.h>
int main(){
    int n,a=0,b=1,c,f=0;
    scanf("%d",&n);
    while(a<=n){
        if(a==n){
            printf("True");
            f=1;
            break;
        }
        c=a+b;
        a=b;
        b=c;
    }
    if(f==0) printf("False");
}