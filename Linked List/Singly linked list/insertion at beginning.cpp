//linked list insertion at the beginning
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
			print();
	}
	return 0;
}
void insert(int data)
{
	node* temp=new node();
	temp->data=data;
	if(head==NULL)
	{
		temp->link=NULL;
		head=temp;
	}
	else
	{
		temp->link=head;
		head=temp;
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
