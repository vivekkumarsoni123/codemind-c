#include<stdio.h>
int main() {
    int n,s=0;
    scanf("%d",&n);
    int x[n];
    for(int i=0;i<n;i++){
        scanf("%d",&x[i]);
        if(x[i]%2!=0) {
            s+=x[i];
        }
    }
    printf("%d",s);
}