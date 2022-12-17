#include<stdio.h>
int tem(int n)
{
    int i,j,c=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(i*i+j*j==n)
            {
            c++;
            break;
            }
        }
    }
    if(c>=1)return 1;
    else return 0;
}
int main()
{
    int n;
    scanf("%d",&n);
    if(tem(n))printf("True");
    else printf("False");
}