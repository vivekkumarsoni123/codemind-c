#include<stdio.h>
int main(){
    int n,s=0,c=0;
    scanf("%d",&n);
    int x[n];
    for(int i=0;i<n;i++){
        scanf("%d",&x[i]);
        s+=x[i];
    }
    int a=s/n;
    for(int i=0;i<n;i++){
        if(x[i]<=a){
            c++;
        }
    }
    printf("%d",c);
}