#include<stdio.h>
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    int max=a>b ? a:b;
    int i;
    for(i=max;;i+=max)
    {
        if(i%a==0 && i%b==0)
        {
            printf("%d",i);
            break;
        }
    }
}