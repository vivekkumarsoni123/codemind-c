#include<stdio.h>
int main(){
    int n,s=0,r;
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
            n=n/10;
        s=s+r*r;
        if(s>9&&n==0)
        {
        n=s;
        s=0;
        }
    }
    if(s==1||s==7)
        printf("True");
        else printf("False");
}