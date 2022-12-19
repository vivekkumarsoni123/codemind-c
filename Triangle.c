#include<stdio.h>
int main()
{
    int n,m,k;
    scanf("%d%d%d",&n,&m,&k);
    if(n==m&&m==k&&k==n)printf("Equilateral triangle");
    else if(n==m||n==k||m==k)printf("Isosceles triangle");
    else if(n!=m&&m!=k&&k!=n)printf("Scalene triangle");
    
}