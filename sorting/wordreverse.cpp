#include <iostream>
#include <string.h>
using namespace std;


	//int index=0;
	//int ind=0,count=0,j=0;
	/*for(ind=0;ind<l;ind++)
	{
		if(string[ind]==' ')
			begin[j]=ind-1;
			//cout<<count;
			cout<<begin[j];
			j++;
	}
	//for(ind=0;ind<l;ind++)
	//{
		
		//for(int k=0;k<j;k++)
			//cout<<begin[k];
			//index=begin[k];
		//{
		//	cout<<string[index];
		//}
	//}


	//}*/
//int main(){
int main()
{
	char string[]="Computer Science";
	int l;
	l=strlen(string);
	char begin[l];
	int i=0,ind=0;

		while(i <= l)
		{
			begin[ind]=string[i];
			if(string[i]==' '|| string[i]=='\0')
				{
					begin[ind]=NULL;
					cout<<begin<<"\n";
					
					ind=0;
					//ind++;
					i++;
				}
			else
			{
				
				ind++;
				i++;
			}
		}
				
	return 0;
}