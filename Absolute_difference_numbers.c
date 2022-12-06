#include<stdio.h>
#include<math.h>
int main()
{
    int n,m,r,r1,r2,r3,s=0,s1=0,s2=0,s3=0,p,g,i=0;
    scanf("%d%d",&n,&m);
    p=n;
    g=0;
    while(n!=0&&i!=m)
    {
        i++;
        r=n%10;
        s=s*10+r;     // 64
        n=n/10;
        ;
    }
    //printf("%d",abs(s));
    while(s!=0)
    {
        r1=s%10;
        s1=s1*10+r1;   // 46
        s=s/10;
    }
    //printf("%d",abs(s1));
    while(p!=0)
    {
        r2=p%10;
        s2=s2*10+r2;       // 64512 
        p=p/10;
    }
    //printf("%d",abs(s2));
    while(s2!=0&&g!=m)
    {
        g++;
        r3=s2%10;
        s3=s3*10+r3;
       // printf("%d",abs(s3));//21
        s2=s2/10;
        
    }
    printf("%d",abs(s3-s1));
    
}