#include<bits/stdc++.h>
using namespace std;
struct node
{
	int data;
	node* prev;
	node* next;
};
node* head;
void insertathead(int x)
{
	node* temp=new node();
	temp->data=x;
	if(head==NULL)
	{
		head=temp;
		temp->prev=NULL;
		temp->next=temp;
	}
	else
	{
		node *temp1=head;
		while(temp1->next!=head)
		{
			temp1=temp1->next;
		}
		temp->prev=NULL;
		temp->next=head;
		head->prev=temp;
		head=temp;
		temp1->next=temp;
		
	}
}
void insertattail(int x)
{
	node* temp=new node();
	temp->data=x;
	if(head==NULL)
	{
		head=temp;
		temp->next=temp;
		temp->prev=NULL;
	}
	else
	{
		node* temp1=head;
		while(temp1->next!=head)
		{
			temp1=temp1->next;
		}
		temp1->next=temp;
		temp->next=head;
		temp->prev=temp1;
	}
}
void print()
{
	node* temp=head;
	cout<<"FORWARD LIST: "<<endl;
	while(temp->next!=head)
	{
		cout<<temp->data<<" "<<temp->next<<endl;
		temp=temp->next;
	}
	cout<<temp->data<<" "<<temp->next<<endl;
	node* t=temp->next;
	cout<<endl<<"to show a circulat inked list:";
	cout<<t->data<<" "<<t->next<<endl;
}
void reverseprint()
{
	cout<<endl<<"REVERSE LIST: "<<endl;
	node* temp=head;
	while(temp->next!=head)
	temp=temp->next;
	while(temp->prev!=NULL)
	{
		cout<<temp->data<<" "<<temp->prev<<endl;
		temp=temp->prev;
		
	}
	cout<<temp->data<<" "<<temp->prev<<endl;
}
void delete1(int x)
{
	node* temp=new node();
	node* temp1=head;
	if(x==1)
	{
		while(temp1->next!=head)
		{
			temp1=temp1->next;
		}
		temp=head->next;
		temp->prev=NULL;
		free(head);
		head=temp;
		temp1->next=temp;
		
	}
	else
	{
		temp=head;
		for(int i=0;i<x-2;i++)
		temp=temp->next;
		temp1=temp->next;
		temp->next=temp1->next;
		node* t=temp1->next;
		t->prev=temp;
		free(temp1);
	}
	
}
int main()
{
	head=NULL;
	insertathead(99);
	insertathead(3);
	insertattail(5);
	insertathead(7);
	insertathead(8);
	insertattail(9);
	insertattail(22);
	insertathead(4);
	print();
	reverseprint();
	cout<<endl<<"AFTER DELETION:"<<endl;
	delete1(5);
	print();
	reverseprint();
}
