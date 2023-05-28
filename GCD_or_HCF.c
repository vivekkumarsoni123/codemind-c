#include<stdio.h>
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    int min=n<m?n:m;
    for(int i=min;i>=1;i--){
        if(n%i==0 && m%i==0){
            printf("%d",i);
            break;
        }
    }
}