//linked list deletion 
#include<bits/stdc++.h>
using namespace std;
struct node
{
	int data;
	node* link;
};
void print();
void insert(int data);
void delete1(int k);
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
	int k;
	cout<<endl<<"ENTER KEY YOU WANT TO DELETE=";
	cin>>k;
	delete1(k);
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
void delete1(int k)
{
	node* temp=head;
	if(temp->data==k)
	{
	head=temp->link;
	free(temp);	
	}
	else
	{
		node* temp1=new node();
	while(temp->data!=k)
	{
		temp1=temp;
		temp=temp->link;
	}
	temp1->link=temp->link;
	free(temp);
    }  
}
