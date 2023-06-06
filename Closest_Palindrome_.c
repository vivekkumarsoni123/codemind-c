#include<stdio.h>
int pal(int n){
    int s=0,q=n;
    while(n){
        int r=n%10;
        s=s*10+r;
        n=n/10;
    }
    if(s==q) return 1;
    else return 0;
}
int main(){
    int n,p1,p2,d1=0,d2=0;
    scanf("%d",&n);
    for(int i=n+1;;i++){
        d1++;
        if(pal(i)){
            p1=i;
            break;
        }
    }
    for(int i=n-1;;i--){
        d2++;
        if(pal(i)){
            p2=i;
            break;
        }
    }
    if(d1 < d2) printf("%d",p1);
    else if(d2 < d1) printf("%d",p2);
    else printf("%d %d",p2,p1);
}