#include<stdio.h>
void copy_arr(int a[5],int b[5])
{
	int i;
	for(i=0;i<5;i++)
	{
		b[i]=a[i];
	}
	printf("elements of copied b array:");
	for(i=0;i<5;i++)
	printf("%d",b[i]);
}
int main()
{
	int a[5]={1,2,3,4,5};
	int b[5];
	copy_arr(a,b);
	
}
