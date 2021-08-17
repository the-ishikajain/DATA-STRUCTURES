//linked list insertion at any position
#include<bits/stdc++.h>
using namespace std;
struct node
{
	int data;
	node* link;
};
void print();
void insert(int data,int p);
node* head;
int main()
{
	head=NULL;
	int n;
	cout<<"ENTER NUMBER OF ELEMENTS YOU WANT TO INSERT: "<<endl;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int x,p;
		cout<<endl<<"ENTER ELEMENT and its position"<<endl;
		cin>>x>>p;
		insert(x,p);
			print();
	}
	return 0;
}
void insert(int data,int p)
{
	node* temp=new node();
	temp->data=data;
	if(p==1)
	{
		temp->link=head;
		head=temp;
	}
	else
	{
		node* temp1=head;
		for(int i=1;i<p-1;i++)
		{
			temp1=temp1->link;
		}
		temp->link=temp1->link;
	    temp1->link=temp;
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
