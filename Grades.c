#include<stdio.h>
int main()
{
    int n,m,k,l,j;
    scanf("%d%d%d%d%d",&n,&m,&k,&l,&j);
    float p=(n+m+k+l+j)*0.2;
    if(p>=90)printf("Grade A");
    else if(p>=80)printf("Grade B");
    else if(p>=70)printf("Grade C");
    else if(p>=60)printf("Grade D");
    else if(p>=40)printf("Grade E");
    else if(p<40)printf("Grade F");
}