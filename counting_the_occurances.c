#include<stdio.h>
int main()
{
    char str[10000],ch;
    scanf("%[^
]s",str);
    scanf(" %c",&ch);
    
    int i,t=0;
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]==ch) t++;
        
    }
    if(t!=0)printf("%d",t);
    else printf("-1");
    
}