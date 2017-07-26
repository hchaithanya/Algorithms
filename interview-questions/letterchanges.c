#include <string.h>
#include <stdio.h>

int main(){
	char s[30];
	int ch;
	int l,i;
	scanf("%[^\n]",s);
	l=strlen(s);
	for(i=0;s[i]!='\0';i++)
	{
			if(s[i]>='a'&&s[i]<='z')
			{
				s[i]=s[i]+1;
			}
	}	
	puts(s);
	/*for(i=0;s[i]!='\0';i++)
	{
		printf("%c",s[i] );
	}*/
	}
