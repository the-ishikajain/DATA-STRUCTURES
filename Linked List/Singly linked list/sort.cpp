#include<bits/stdc++.h>
using namespace std;
struct node
{
	int data;
	node* link;
};
void print();
void insert(int data);
node* head;
void remove()
{
	node* temp=head;
	node* temp1;
		while(temp->link!=NULL)
	{
		temp1=temp->link;
		if(temp->data==temp1->data)
		{
			node* temp2=temp1->link;
			free(temp1);
			temp->link=temp2;
		}
		else
		temp=temp->link;
	}
}
int main()
{
	head=NULL;
	int n;
	cout<<"ENTER NUMBER OF ELEMENTS YOU WANT TO INSERT: "<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int x;
		cout<<endl<<"ENTER ELEMENT"<<endl;
		cin>>x;
		insert(x);
	}
	remove();
	print();
	return 0;
}

void insert(int data)
{
	node* temp=new node();
	temp->data=data;
	temp->link=NULL;
	if(head==NULL)
	{
		head=temp;
	}
	else
	{
		node* temp1=new node();
	    temp1=head;
	while((temp1->link)!=NULL)
	{
		temp1=(temp1->link);
	}
	(temp1->link)=temp;
	}
}
void print()
{
	node* temp=head;
	cout<<"list is:"<<endl;
	while(temp!=NULL)
	{
		cout<<(temp->data)<<" ";
		temp=(temp->link);
	}
}
