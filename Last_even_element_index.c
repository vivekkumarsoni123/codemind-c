#include<stdio.h>
int main(){
    int n,k;
    scanf("%d",&n);
    int x[n];
    for(int i=0;i<n;i++){
        scanf("%d",&x[i]);
        if(x[i]%2 == 0 ) k=i;
    }
    printf("%d",k);
}