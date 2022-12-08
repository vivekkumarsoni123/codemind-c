#include<stdio.h>
int main()
{
    int f=0,q;
    scanf("%d",&q);
    while(q!=1)
    {
        if(q%2==0)
        {
            q=q/2;
        }
        else if(q%3==0)
        {
            q=q/3;
        }
        else if(q%5==0) 
        {
            q=q/5;
        }
        else 
        {
            printf("Not Ugly Number");
            f=1;
            break;
        }
    }
    if(f==0)
    {
        printf("Ugly Number");
    }
    
}