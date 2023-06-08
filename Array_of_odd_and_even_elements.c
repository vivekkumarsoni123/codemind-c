#include<stdio.h>
int main(){
    int n,b[1000],k=0;
    scanf("%d",&n);
    int x[n];
    for(int i=0;i<n;i++){
        scanf("%d",&x[i]);
        if(x[i]%2 != 0) printf("%d ",x[i]);
        else b[k++] = x[i];
    }
    for(int i=0;i<k;i++){
        printf("%d ",b[i]);
    }
}