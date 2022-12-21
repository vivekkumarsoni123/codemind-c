#include<stdio.h>
int main(){
    int n,s=0,r,max=0;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
            n=n/10;
            if(r>max)
            max=r;
        
    }
        printf("%d",max);
}