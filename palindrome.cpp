#include<stdio.h>
#include<string.h>
int main()
{
	char a[10],*p;
	int l=0,i,f=0;
	p=a;
	printf("enter string :");
	gets(p);
	l=strlen(p);
       for(i=0;i<l/2;i++)
	{
		if(*(p+i)!=*(p+l-1-i))
		{
			f=l;
			break;
			
		}
	}
	if(f==1)
	{
		printf("non paindrome");
		
	}
	else
	{
		printf(" palindrome");
		return 0;
	}
}
