#include<stdio.h>
#include<math.h>
int main(){ int n,i,c=0,s=0,a; scanf("%d",&n); int x[n];
for(i=0;i<n;i++){ scanf("%d",&x[i]); if(x[i]%2==0)c+=x[i];
else if(x[i]%2!=0)s+=x[i]; } printf("%d",abs(c-s)); }