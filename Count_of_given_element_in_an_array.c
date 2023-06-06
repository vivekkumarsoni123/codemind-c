#include<stdio.h>
int main(){
    int n,k,c=0;
    scanf("%d",&n);
    int x[n];
    for(int i=0;i<n;i++){
        scanf("%d",&x[i]);
    }
    scanf("%d",&k);
    for(int i=0;i<n;i++){
        if(x[i] == k) c++;
    }
    printf("%d",c);
}