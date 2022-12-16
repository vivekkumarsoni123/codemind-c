#include<stdio.h>
#include<math.h>
int prime(int n)
{
    int i,c=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        c++;
    }
    if(c==2)return 1;
    else return 0;
}
int main()
{
    int k,i,d1=0,d2=0,np1,np2,t;
    scanf("%d",&t);
        for(k=t;;k++)
        {
            if(prime(k))
            {
                d1=k-t;
                np1=k;
                break;
            }
        }
        for(k=t-1;;k--)
        {
            if(prime(k))
            {
                d2=t-k;
                np2=k;
                break;
            }
        }
        if(d1<d2)printf("%d
",abs(np1-t));
        else if(d2<d1)printf("%d
",abs(np2-t));
        else printf("%d
",abs(t-np2));
}