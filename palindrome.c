#include <stdio.h>
#include <string.h>
 
int checkpalindrome(char s[])
{
	int i,j;
	for(i=0,j=strlen(s)-1;i<=j;i++,j--)
		if(s[i]!=s[j])
		{
			break;
		}
		if(i>j)
			return 1;
		else
			return 0;
		
}
int main()
{
    char s[1000];  
   
    printf("Enter  the string: ");
    gets(s);
    
    if(checkpalindrome(s))
 	    printf("string is palindrome");
    else
        printf("string is not palindrome");
}

