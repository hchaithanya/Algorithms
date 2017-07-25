#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
	int i,n,total=1;
	int a[20];
	printf("enter size\n");
	scanf("%d",&n);
	printf("enter the values\n"); //[1, 7, 3, 4]//
	for(i=0;i<n;i++)
	{
	scanf("%d",&a[i]);//	
	}
	
	// n=sizeof(a);
	for(i=0;i<n;i++)
	{
		total=a[i]*total;

	}
	printf("%d\n",total );
	for(i=0;i<n;i++)
	{
		a[i]=total/a[i];
	}
	/*for(i=0;i<n;i++)
	{

		printf("inside for loop i\n");
		for(j=0;j<n;j++)
		{
			printf("iside for loop j\n");
			while(i!=j){
				prod*=a[j];

			}
			a[i]=prod;
			
		}
	}*/
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}