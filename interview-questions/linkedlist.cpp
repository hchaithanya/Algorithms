#include <iostream>
#include <stdlib.h>
using namespace std;

//int arr[]={10,33,45,56,2,37,32,55,13,1,-20};
typedef struct list
{	
	int data;
	list *next;
} LIST;

typedef LIST *sll;

sll start,prev,next,tptr,newnode;

void createnode(int data)
{
	newnode=(sll)malloc(sizeof(LIST));
	newnode->data=data;
	newnode->next=NULL;
}

void addnode(int data)
{	
	createnode(data);
	tptr=start;

	for(tptr=start;tptr&&tptr->data< newnode->data;prev=tptr,tptr=tptr->next); //traversal//
	if(tptr==start)				//insertion at the beginning//
	{
		newnode->next=start;
		start=newnode;
	}

	else{					//insertion at middle and end//
		prev->next=newnode;
		newnode->next=tptr;
	}
}

void traverse()
{
	for(tptr=start;tptr;tptr=tptr->next)
	{
		cout<<tptr->data<<endl;
	}
}

int main()
{
	addnode(10);
	addnode(20);
	addnode(40);
	cout<<"\nnode created successfully";
	traverse();
	//cout<<"\nenter node to add";
	//cin>>insert;
	//addnode(10);
	//cout<<"\n inserted successfully";
	traverse();
}