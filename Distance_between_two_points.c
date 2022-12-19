#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,k,l;
    //float d;
    scanf("%d%d%d%d",&n,&m,&k,&l);
    //d=float(sqrt((k-n)*(k-n)-(l-m)*(l-m)));
    printf("%.4f",sqrt((k-n)*(k-n)+(l-m)*(l-m)));
}