#include <iostream>
#include <string.h>

using namespace std;
int occur(char *string)
{
	int count[20]={0},max=-1;
	int l,i;
	char res;
	l=strlen(string);
	for(i=0;i<l;i++)
	{
		count[string[i]]++;
	}
	for(i=0;i<l;i++)
	{
		if(max<count[string[i]])
			max=count[string[i]];
			res=string[i];
	}
	return res;
}
int main(){

	char word[]="test";
	char max;
	max=occur(word);
	cout<<max;
}