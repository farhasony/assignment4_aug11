
  
#include <stdio.h>
#include <string.h>
void count_freq(char[],int);
 
int main()
{
   char a[]={1,2,3,1,2,7,9,1,6,6};
   int len=sizeof(a)/sizeof(a[0]);
   count_freq(a,len);
   
}

void count_freq(char a[], int len) {
	int freq[len];
	int i,j;
	int visited=-1;
		for(i=0;i<len;i++)
		{
  		 int c = 1;
   			for( j=i+1;j<len;j++)
  					 {
  					 	if(a[i]==a[j])
   									{
   										c++;
   										freq[j]=visited;//to avoid counting same element again
	  								 }
  					  }
		
  			 if(freq[i]!=visited)
  			 freq[i]=c;
		}
   for(i=0;i<len;i++)
   {
   	if(freq[i]!=visited)
   	{
   		printf("%d   =",a[i]);
   			printf("  %d\n",freq[i]);
	}
   }
   
   
}

