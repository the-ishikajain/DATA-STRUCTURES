//search element
#include<bits/stdc++.h>
using namespace std;
struct node
{
	int data;
	node* next;
};
node* head;
void search(int x)
{
	node* temp=head;
	while(temp!=NULL)
	{
		if(temp->data==x)
		{
		cout<<"true"<<endl;
		return;
	    }
		temp=temp->next;
	}
	cout<<"false"<<endl;
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
	insert(8);
	insert(14);
	insert(40);
    search(11);    //false
	search(40);   //true
	search(4);    //true
	search(18);   //false
	return 0;
}
