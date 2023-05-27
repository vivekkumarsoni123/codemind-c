#include<stdio.h>
int main(){
    int n,m,s=0,sum=0;
    scanf("%d%d",&n,&m);
    for(int i=1;i<=n/2;i++){
        if(n%i == 0) s=s+i;
    }
    for(int i=1;i<=m/2;i++){
        if(m%i == 0) sum=sum+i;
    }
    if(s==m && sum==n) printf("Amicable");
    else printf("Not Amicable");
}