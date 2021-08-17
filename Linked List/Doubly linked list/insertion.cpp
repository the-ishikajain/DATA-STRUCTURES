#include<bits/stdc++.h>
using namespace std;
struct node
{
	int data;
	node* prev;
	node* next;
};
node* head;
void InsertionAtHead(int x)
{
	node* temp=new node();
	temp->data=x;
	temp->prev=NULL;
	temp->next=NULL;
	if(head==NULL)
	{
		head=temp;
	}
	else
	{
		temp->next=head;
		head->prev=temp;
		head=temp;
		
	}
	
}
void InsertionAtTail(int x)
{
	node* temp=new node();
	temp->data=x;
	temp->prev=NULL;
	temp->next=NULL;
	if(head==NULL)
	{
		head=temp;
	}
	else
	{
			node* temp1=new node();
		    temp1=head;
		    while(temp1->next!=NULL)
		    {
		    	temp1=temp1->next;
			}
			temp1->next=temp;
			temp->prev=temp1;
	}
}
void print()
{
	cout<<"FORWARD LIST IS : ";
   node* temp=head;
   while(temp!=NULL)
   {
   	cout<<temp->data<<" ";
   	temp=temp->next;
   }
   cout<<endl;	
}
void reverseprint()
{
	node* temp=new node();
	temp=head;
   while(temp->next!=NULL)
   {
   	temp=temp->next;
   }
   cout<<"REVERSE LIST IS : ";
   while(temp!=NULL)
   {
   	cout<<temp->data<<" ";
   	temp=temp->prev;
   }
   cout<<endl;
   
}
int main()
{
	head=NULL;
		InsertionAtHead(6);
		InsertionAtTail(7);
		InsertionAtTail(8);
		InsertionAtHead(9);
		InsertionAtHead(2);
		InsertionAtTail(5);
		InsertionAtTail(1);
	    InsertionAtHead(3);
		print();
		reverseprint();
}
