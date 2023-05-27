#include<stdio.h>
int main(){
    int n,f=0;
    scanf("%d",&n);
    for(int i=1;i<=n/2;i++){
        if(i*(i+1) == n){
            printf("YES");
            f=1;
            break;
        }
    }
    if(f==0){
        printf("NO");
    }
}