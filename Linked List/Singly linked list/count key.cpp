#include<bits/stdc++.h>
using namespace std;
struct node
{
	int data;
	node* next;
};
node* head;
void count(int x)
{
	int c=0;
	cout<<"TOTAL NUMBER OF NODES ARE= ";
	node* temp=head;
	while(temp!=NULL)
	{
		if(temp->data==x)
		c++;
		temp=temp->next;
	}
	cout<<c<<endl;
}
void insert(int x)
{
	node* temp=new node();
	temp->data=x;
	if(head==NULL)
	{
		temp->next=NULL;
		head=temp;
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
	head=NULL;
	insert(4);
	insert(6);
	insert(5);
	insert(7);
	count(4);
	insert(8);
	insert(4);
	insert(4);
	count(4);
	count(9);
	count(8);
	return 0;
}
