#include<stdio.h>
int main(){
    int n,min=99999;
    scanf("%d",&n);
    int x[n];
    for(int i=0;i<n;i++){
        scanf("%d",&x[i]);
        if(x[i] < min) min=x[i];
    }
    printf("%d",min);
}