#include<stdio.h>
int prime(int n){
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
int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int n,d1=0,d2=0,p1,p2;
        scanf("%d",&n);
        for(int i=n;;i++){
            d1++;
            if(prime(i)){
                p1=i;
                break;
            }
        }
        for(int i=n;;i--){
            d2++;
            if(prime(i)){
                p2=i;
                break;
            }
        }
        if(d1>d2) printf("%d
",p2);
        else if(d1<d2) printf("%d
",p1);
        else printf("%d
",p2);
    }
}