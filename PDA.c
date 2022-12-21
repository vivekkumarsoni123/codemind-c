#include<stdio.h>
int main()
{
    int n,s=0,i;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        if(n%i==0)
        s+=i;
    }
      if(s==n)  printf("PERFECT");
    else if(s>n) printf("ABUNDANT");
    else if(s<n) printf("DEFICIENT");
}