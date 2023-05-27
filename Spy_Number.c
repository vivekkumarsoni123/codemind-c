#include<stdio.h>
int main(){
    int n,s=0,p=1;
    scanf("%d",&n);
    while (n!=0){
        int r=n%10;
        s=s+r;
        p=p*r;
        n=n/10;
    }
    if(s==p) printf("Spy Number");
    else printf("Not Spy Number");
}