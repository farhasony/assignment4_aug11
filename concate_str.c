#include<stdio.h>
#include<string.h>
void concatenatestr(char str1[],char str2[])
{
int i,len=0;
while(str1[len]!='\0')
++len;
for(i=0;str1[i]!='\0';i++,++len)
str1[len]=str2[i];
str1[len]='\0';

printf(" str1 %s\n",str1);	
}

int main()
{
char str1[100],str2[100];
gets(str1);
gets(str2);
concatenatestr(str1,str2);

}
