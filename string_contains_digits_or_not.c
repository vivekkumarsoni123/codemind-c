#include<stdio.h>
#include<string.h>
int main()
{
    int n,k;
    scanf("%d",&n);
    for(k=0;k<n;k++)
    {
    char str[999999];
    int i,c=0;
    scanf("%s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]>='0'&&str[i]<='9')
        c++;
    }
    if(c>0)printf("Yes
");
    else printf("No
");
    }
}