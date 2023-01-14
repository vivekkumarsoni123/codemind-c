#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int i,c=0;
	scanf("%[^
]s",str);
	for(i=0;str[i]!=NULL;i++)
	{
		if(str[i]>=48&&str[i]<=57)c++;
	}
	if(c>0)printf("Contains %d digit",c);
	else printf("Doesn't contain digit");
}