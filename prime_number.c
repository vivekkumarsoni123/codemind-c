#include<stdio.h>
int main() {
    int c=0,n;
    scanf("%d",&n);
    for(int i=2;i<=n/2;i++){
        if(n%i==0){
            c=1;
            break;
        }
    }
    if(c==0) printf("prime");
    else printf("not a prime");
}