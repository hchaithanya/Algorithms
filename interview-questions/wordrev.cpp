#include <iostream>
#include <string.h>
using namespace std;
void wordreverse(char s[],int);

char* stringreverse(char string[],int len)
{
	char temp;
	//char newstring[len];
	int ind=0,end=0;
	for(ind=0,end=len-1;ind<end;ind++,end--)
	{
		temp=string[ind];
		string[ind]=string[end];
		string[end]=temp;
	}
	//cout<<string;
	return string;
}
void wordreverse(char string[],int len)
{
	int start,end;
	char temp;
	int index;
	int save;
	start=end=0;
	
	while(1)
	{
		if(string[save-1]==NULL)
		{
			break;
		}
		while(string[end]!=' '&&string[end]!='\0')
		{
			end++; //gets the last position of the word

		}
		save=end+1;
		end--;
		while(end>start)		//word reversal//
		{
			temp=string[start];
			string[start]=string[end];
			string[end]=temp;
			start++;
			end--;
			
		}
		
		start=end=save;

	}
	cout<<string<<endl;
}

int main()
{
	char string[]="one two three four";
	int len;
	len=strlen(string);
	char newstring[17];
	stringreverse(string,len);
	cout<<endl<<string;
	//wordreverse(string,len);
	return 0;
}