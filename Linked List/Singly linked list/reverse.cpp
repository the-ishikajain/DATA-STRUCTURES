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
void reverse()
{
	node* temp2;
	node* temp=head;
	node* temp1=NULL;
	while(temp!=NULL)
	{
		temp2=temp->link;
		temp->link=temp1;
		temp1=temp;
		temp=temp2;
	}
	head=temp1;
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
	cout<<"list is:"<<endl;
	print();
	cout<<endl<<"reverse list is:"<<endl;
	reverse();
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
	while(temp!=NULL)
	{
		cout<<(temp->data)<<" ";
		temp=(temp->link);
	}
}
