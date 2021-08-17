#include<bits/stdc++.h>
using namespace std;
struct node
{
	int data;
	node* next;
};
node *head;
int c=0;
void count()
{
	node* temp=new node();
	temp=head;
	while(temp!=NULL)
	{
		temp=temp->next;
		c++;
	}
}
void nth(int x)
{
	node* temp=new node();
	temp=head;
	int i=0;
	while(i<(c-x))
	{
		temp=temp->next;
		i++;
	}
	cout<<"NODE AT NTH FROM THE END= ";
	cout<<temp->data;
}
void insert(int x)
{
	node* temp=new node();
	temp->data=x;
	if(head==NULL)
	{
		head=temp;
		temp->next=NULL;
	}
	else
	{
		node* temp1=new node();
		temp1=head;
		temp->next=NULL;
		while(temp1->next!=NULL)
		{
			temp1=temp1->next;
		}
		temp1->next=temp;
	}
	
}
int main()
{
head = NULL;
insert(1);	
insert(2);	
insert(3);	
insert(4);	
insert(5);
insert(6);
insert(7);
insert(8);
insert(9);
count();	
nth(9);	
}
