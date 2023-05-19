#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    while(n>9) {
        int rem = n%10;
        n = n / 10;
        n = n + rem;
    }
    printf("%d",n);
}