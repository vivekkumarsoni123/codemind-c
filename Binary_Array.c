#include<stdio.h>
int main() {
    int n,c=0;
    scanf("%d",&n);
    int x[n];
    for(int i=0;i<n;i++){
        scanf("%d",&x[i]);
        if(x[i]==1 || x[i]==0){
            c++;
        }
    }
    if(c==n){
        printf("True");
    }
    else {
        printf("False");
    }
}