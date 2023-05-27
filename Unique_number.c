#include<stdio.h>
int main(){
    int n,x[1000],k=0,f=0;
    scanf("%d",&n);
    while(n){
        int r=n%10;
        for(int i=0;i<=k;i++){
            if(x[i]==r){
                printf("Not Unique Number");
                f=1;
                break;
            }
        }
        if(f==1) break;
        else{
            x[k++]=r;
        }
        n=n/10;
    }
    if(f==0) printf("Unique Number");
}