#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

void recurence(char *str1,char *str2)
{
	int l1,l2,l3,i;
	char *temp=NULL;
	l1=sizeof(str1);
	l2=sizeof(str2);
	l3=l1+l2;
	temp=new char[l3];
	temp=strcpy(temp,str1);
	temp=strcat(temp,str1);
	//puts(temp);
	if(strstr(temp,str2))
	{
		cout<<"found";
	}
	else 
		cout<<"not possible";

}
int main(){
	char a[]="AACD";
	char b[]="DAAC";
	recurence(a,b);
	return 0;
}