#include <iostream>
#include <limits.h> 
#include <algorithm>
#define SIZE 7
using namespace std;

void print(int arr[], int size)
{
	for(int i=0;i<size;i++)
		cout<<arr[i]<<"\t";
}
void sort(int arr[],int size)
{
	int min= INT_MIN;
	int i=0,j;
	int temp;
	for ( i=0;i<size; i++)
	{
		min=i;

		for(int j=i+1;j<size; j++)
		{
			if(arr[j]<arr[min])
				min=j;
	
		}
	temp=arr[i];
	arr[i]=arr[min];
	arr[min]=temp;
}	
}
int main()
{
	int size;
	int a[SIZE]={6,4,8,3,2,1};
	size=sizeof(a)/sizeof(a[0]);
	sort(a,size);
	print(a,size);
	return 0;
}