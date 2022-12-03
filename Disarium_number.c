#include<stdio.h>
#include<math.h>
int main()
{
    int n,p,r,s=0,c=0,i,sum=0,r1,b;
    scanf("%d",&n);
    p=n;
    b=n;
    while(n!=0)
    {
        c++;
        r=n%10;
        n=n/10;
    }
    while(p!=0||c!=0)
    {
      r1=p%10;
      sum=sum+pow(r1,c);
      p=p/10;
      c--;
    }
    if(b==sum)printf("True");
    else printf("False");
}