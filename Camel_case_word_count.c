#include<stdio.h>
int main()
{
    char str[999999];
    scanf("%s",str);
    int i,t=1;
    for(i=1;str[i]!=NULL;i++)
    {
        if(str[i]>=65&&str[i]<=90) 
        {
            if(str[i+1]>=97 && str[i+1]<=122)
                t++;
        }
    }
    printf("%d",t);
}