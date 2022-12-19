#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    printf("H:M:S-%d:%d:%d",n/3600,n%3600/60,n%3600%60);
}