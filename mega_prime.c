#include<stdio.h>
int prime(int n){
    if(n==1) return 0;
    else {
        int c=0;
        for(int i=2;i<=n/2;i++){
            if(n%i==0){
                c=1;
                break;
            }
        }
        if(c==0) return 1;
        else return 0;
    }
}
int main(){
    int t;
    scanf("%d",&t);
    if(prime(t)){
        while(t){
            int r=t%10;
            if(prime(r)){
                t=t/10;
            }
            else break;
        }
        if(t==0) printf("Mega Prime");
        else printf("Not Mega Prime");
    }
    else printf("Not Mega Prime");
}