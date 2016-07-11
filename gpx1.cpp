#include<stdio.h>

#include<string.h>
int main()
{
	FILE *fp;
	char *ptr1=(?xml version="1.0" encoding="UTF-8" standalone="no" ?)

    char s[11];
    int i=0;
	while(!((*(ptr1+i)=='m')&&(*(ptr1+i+1))=='a')&&(*(ptr1+i+2)=='x')&&(*(ptr1+i+3)=='l')&&(*(ptr1+i+4)=='a')))
	{
		i++;
	}
	strncpy(s,ptr1+i+7,9);
	s[9]='\0';
	printf("%s\n",s);
	strncpy(s,ptr1+i+24,10);
	s[10]='\0';
	printf("%s\n",s);
	
	fseek(fp,0,SEEK_END);
	flen=ftell(fp);
	str=(char *)malloc(1*flen);
	fread(str,1,flen,fp);
	while(!(str[i]='<'&&str[i+1]='g'&&str[i+2]='p'&&str[i+3]='x'&&str[i+4]='>'))
	{
		if(str[i]='l'&&str[i+1]='a'&&str[i+2]='t')
		{
			printf("Î³¶È£º");
			strcpy(lat,9); 
		}
	} 
	free(str);
	fclose(fp);
	
	return 0;
}
