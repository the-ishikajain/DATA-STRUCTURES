#include<bits/stdc++.h>
using namespace std;
struct node
{
	int data;
	node* next;
};
node* head;
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
    insertionattail(7);
    insertionathead(8);
    insertionathead(9);
    print();
}
