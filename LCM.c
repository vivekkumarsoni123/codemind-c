#include<stdio.h>
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    int max=n>m?n:m;
    for(int i=max;;i++){
        if(i%n==0 && i%m==0){
            printf("%d",i);
            break;
        }
    }
}