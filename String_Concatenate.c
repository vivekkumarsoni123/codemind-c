#include<stdio.h>
#include<string.h>
int main()
{
    char str1[100],str2[100];
    scanf("%s
",str1);
    scanf(" %s",str2);
    strcat(str1,str2);
    int i,j,t;
    for(i=0;str1[i]!=NULL;i++)
    {
        for(j=i+1;str1[j]!=NULL;j++)
        {
            if(str1[i]>str1[j])
            {
                t=str1[i];
                str1[i]=str1[j];
                str1[j]=t;
            }
        }
    }
        printf("%s",str1);
}