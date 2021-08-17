#include<bits/stdc++.h>
using namespace std;
struct node
{
	int data;
	node* next;
};
node* head;
void delete1(int x)
{
	node* temp1;
	node* lastnode=head;
	if(x==1)
	{
		node* lastnode=head;
		while(lastnode->next!=head)
		{
			lastnode=lastnode->next;
		}
		temp1=head->next;
		free(head);
		head=temp1;
		lastnode->next=temp1;
	}
	else
	{
		for(int i=0;i<x-2;i++)
		lastnode=lastnode->next;
		temp1=lastnode->next;
		lastnode->next=temp1->next;
		free(temp1);
	}
}
void insertionathead(int x)
{
	node *temp=new node();
	temp->data=x;
	if(head==NULL)
	{
		temp->next=temp;
		head=temp;
	}
	else
	{
		node *temp1=new node();
		temp1=head;
		while(temp1->next!=head)
		{
			temp1=temp1->next;
		}
		temp->next=head;
		head=temp;
		temp1->next=head;
	}
}
void insertionattail(int x)
{
	node *temp=new node();
	temp->data=x;
	if(head==NULL)
	{
		temp->next=temp;
		head=temp;
	}
	else
	{
	node *temp1=new node();	
	temp1=head;
	while(temp1->next!=head)
	{
		temp1=temp1->next;
	}
	temp1->next=temp;
	temp->next=head;
	}
}
void print()
{
	node *temp=head;
	while(temp->next!=head)
	{
		cout<<temp->data<<" "<<temp->next<<endl;
		temp=temp->next;
	}
	node* t=temp->next;
	cout<<temp->data<<" "<<temp->next<<endl;
	cout<<endl<<"link of last node is with = ";
	cout<<t->data<<" "<<t->next;	
}
int main()
{
	head=NULL;
	insertionattail(11);
    insertionathead(4);
    insertionattail(5);
    insertionathead(6);
    insertionattail(88);
    insertionathead(8);
    print();
    delete1(6);
    cout<<endl<<"AFTER DELETION:"<<endl;
    print();
    
}
