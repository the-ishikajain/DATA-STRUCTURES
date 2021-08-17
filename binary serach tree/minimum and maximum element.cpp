#include<bits/stdc++.h>
using namespace std;
struct node
{
	int data;
	node* left;
	node* right;
};
node* create(int);
node* insert(node*,int);
int findmin(node*);
int findmax(node*);
int main()
{
	node* root=NULL;
	root=insert(root,30);
	insert(root,10);
	insert(root,200);
    insert(root,25);
	insert(root,5);
	int min=findmin(root);
	cout<<"MINIMUM = "<<min<<endl;
	int max=findmax(root);
	cout<<"MAXIMUM = "<<max;
}
int findmax(node* root)
{
	if(root==NULL)
	{
		cout<<"NO DATA FOUND";
	}
	else
	{
	if(root->right==NULL)
	return root->data;
	else 
	return findmax(root->right);
}
}
int findmin(node* root)
{
	if(root==NULL)
	{
		cout<<"NO DATA FOUND";
	}
	else
	{
	if(root->left==NULL)
	return root->data;
	else 
	return findmin(root->left);
}
}
node* create(int x)
{
	    node* temp=new node();
	    temp->data=x;
		temp->left=NULL;
		temp->right=NULL;
		return temp;
}
node* insert(node* root,int data)
{
	if(root==NULL)
	{
		return create(data);
	}
	else if(root->data > data)
	{
		root->left=insert(root->left,data);
	}
	else
	{
		root->right=insert(root->right,data);
	}
	return root;
}
