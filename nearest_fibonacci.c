#include<stdio.h>
int fib(int n){
    int a=0,b=1,c;
    for(int i=1;i<n;i++){
        c=a+b;
        a=b;
        b=c;
        if(c==n){
            return 1;
            break;
        }
    }
    return 0;
}
int main(){
    int n,d1=0,d2=0,f1,f2;
    scanf("%d",&n);
    for(int i=n+1;;i++){
        d1=d1+1;
        if(fib(i)){
            f1=i;
            break;
        }
    }
    for(int i=n-1;;i--){
        d2=d2+1;
        if(fib(i)){
            f2=i;
            break;
        }
    }
    if(d1<d2) printf("%d",f1);
    else if(d1>d2) printf("%d",f2);
    else printf("%d %d",f2,f1);
}