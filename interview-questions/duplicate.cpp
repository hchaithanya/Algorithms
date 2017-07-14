#include <iostream>
#include <string.h>
#include <stdio.h>
using namespace std;

void display(char *name, int l)
{
	int i;
	for(i=0;i<l;i++)
	{
		cout<<name[i];
	}
}

void dupli(char *name, int l)
{
	int flag;
	int i=0,j=0;
	char temp=name[i];
	int count;
	
	for(i=0;i<l;i++)
	{
		for(j=i+1;j<l;j++)
		{
			if(name[i]==name[j])
			{
			name[i]=name[j+1];
			}
		}
	}
	display(name,l);
}


void sort(char *name, int l)
{
	int i;
	char small;
	int j;
	for(i=0;i<l;i++)
		{
			for(j=i+1;j<l;j++)
			{
				if(name[i]>name[j])
				{
					small=name[j];
					name[j]=name[i];
				 	name[i]=small;
				 }
				}
			}

}
int main(){

	char word[30];
	int l;
	//word= new char;
	cout<<"Enter the string to find the duplicate\n";
	gets(word);
	l=strlen(word);
	sort(word,l);
	dupli(word,l);
}