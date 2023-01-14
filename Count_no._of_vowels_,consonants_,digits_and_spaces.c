#include<stdio.h>
#include<string.h>
int main()
{
	char str[100];
	int i,c=0,t=0,k=0,ct=0;
	scanf("%[^
]s",str);
	for(i=0;str[i]!=NULL;i++)
	{
		if(str[i]==97||str[i]==101||str[i]==105||str[i]==111||str[i]==117||str[i]==65||str[i]==69||str[i]==73||str[i]==79||str[i]==85)c++;
		else if(str[i]>=48&&str[i]<=57) t++;
		else if(str[i]==' ') ct++;
		else k++;
	}
	printf("Vowels: %d
",c);
	printf("Consonants: %d
",k);
	printf("Digits: %d
",t);
	printf("White spaces: %d",ct);
}