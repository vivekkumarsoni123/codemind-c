#include<stdio.h>
int main(){
    int n,m,i;
    scanf("%d",&n);
    scanf("%d",&m);
    for(i=n;i<=m;i++){
        int k=i;
        while(k!=0){
            int r=k%10;
            if(r==0) break;
            if(r!=0 && i%r!=0){
                break;
            }
            k = k/10;
        }
        if(k==0){
            printf("%d ",i);
        }
    }
}