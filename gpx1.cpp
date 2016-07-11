#include<stdio.h>

#include<string.h>
int main()
{
	FILE *fp;
	char *ptr1=(?xml version="1.0" encoding="UTF-8" standalone="no" ?)

    char s[11];
    int i=0;
	while(!((*(ptr1+i)=='m')&&(*ptr1+i+1)=='a')&&)
	{
		i++;
	}
	strncpy(s,ptr1+i+7,9);
	s[9]='\0';
	printf("%s\n",s);
	strncpy(s,ptr1+i+24,10);
	s[10]='\0';
	printf("%s\n",s);
	
	return 0;
}
