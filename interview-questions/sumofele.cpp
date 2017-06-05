/*Program to print the maximum sum from the sum set of positive elements in a contigious set of numbers
input ={-8,12,15,-10,13,1,18}
output=32*/

#include <iostream>
#include <limits.h>
using namespace std;
#define SIZE 2

void maxsum(int arr[],int n)
{
	int sum[SIZE];
	int ind;
	int min=INT_MIN;
	int i=-1;

	for(ind=0;ind<n;ind++)
	{
		if(arr[ind]>=0)
		{
			sum[i]+=arr[ind];

		}
		else

			i+=1;
	}
	for(i=0;i<SIZE;i++)
	{
		if(min<sum[i])
		{
			min=sum[i];
		}

	}
	cout<<min;
	


}
int main()
{
	int n;
	int a[]={-8,12,15,-10,13,1,18};
	n=sizeof(a)/sizeof(a[0]);
	maxsum(a,n);
}