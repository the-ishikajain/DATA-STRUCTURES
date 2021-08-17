#include<bits/stdc++.h>
using namespace std;
struct node
{
	int data;
	node* next;
};
int c=0;
node* head;
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
		while(temp1->next!=NULL)
		{
			temp1=temp1->next;
		}
		temp->next=NULL;
	    temp1->next=temp;
	}	
}
void count()
{
	node* temp=head;
	while(temp!=NULL)
	{
		c++;
		temp=temp->next;
	}
}
void middle()
{
	node* temp=head;
	int i=0;
	while(i<c/2)
	{
		temp=temp->next;
		i++;
	}
	cout<<"MID ELEMENT IS =";
	cout<<temp->data<<" "<<temp->next<<endl;
}
int main()
{
	int n;
	head=NULL;
	cout<<"ENTER NUMBER OF ELEMENTS YOU WANT TO ENTER=";
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int x;
		cin>>x;
		insert(x);
	}
	count();
	middle();
}
