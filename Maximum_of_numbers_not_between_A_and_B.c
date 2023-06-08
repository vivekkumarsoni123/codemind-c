#include<stdio.h>
int main(){
    int n,a,b,max=0;
    scanf("%d",&n);
    int x[n];
    for(int i=0;i<n;i++){
        scanf("%d",&x[i]);
    }
    scanf("%d%d",&a,&b);
    for(int i=0;i<n;i++){
        if(x[i]<a || x[i]>b){
            if(x[i]>max) max= x[i];
        }
    }
    if(max!=0) printf("%d",max);
    else printf("-1");
}