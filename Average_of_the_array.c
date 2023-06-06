#include<stdio.h>
int main(){
    int n;
    float s=0;
    scanf("%d",&n);
    int x[n];
    for(int i=0;i<n;i++){
        scanf("%d",&x[i]);
        s+=x[i];
    }
    float a=s/n;
    printf("%.2f",a);
}