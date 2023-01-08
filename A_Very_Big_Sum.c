#include<stdio.h>
int main()
{
      int n,i,j;
      scanf("%d",&n);
      long long int x[n],s=0;
      for(i=0;i<n;i++)
      {
      scanf("%lld",&x[i]);
      s=s+x[i];
      }
          printf("%lld",s);
}