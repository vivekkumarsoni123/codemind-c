#include<stdio.h>
#include<string.h>
int main() 
{
   char str[100],str1[100];
   int i,j,temp=0;
    scanf("%[^
]s",str);
    for(i=0;str[i]!=NULL;i++);
    int len=i;
    i=0;
   j=len-1;
   while(i<j)
   {
   	temp=str[i];
   	str[i]=str[j];
   	str[j]=temp;
   	i++;
   	j--;
   }
   printf("%s",str);
   
 
}