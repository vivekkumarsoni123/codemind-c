#include<stdio.h>
#include<string.h>
int main()
{
	char str[100],max=65;
	int i;
	scanf("%[^
]s",str);
	for(i=0;str[i]!=NULL;i++)
	{
		if(str[i]>max) max=str[i];
	}
	printf("%c",max);
}