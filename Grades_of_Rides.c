#include<stdio.h>
int main()
{
    int n,m,k;
    scanf("%d%d%d",&n,&m,&k);
    if(n>50&&m>60&&k>100)printf("10");
    else if(n>50&&m>60&&k<100) printf("9");
    else if(n<50&&m>60&&k>100) printf("8");
    else if(n>50&&m<60&&k>100) printf("7");
    else if(n>50||m>60||k>100) printf("6");
    else  printf("5");
}