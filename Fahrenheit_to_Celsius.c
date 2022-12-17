#include<stdio.h>
int main()
{
    int l;
    float c;
    scanf("%d",&l);
    c=(float)((l-32)*5)/9;
    printf("%.2f",c);
}