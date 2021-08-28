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
node* common_ancestor(node*,int,int);
node*  common_ancestor(node* root,int x,int y)
{
	if(root==NULL)
	return NULL;
	   if(root->data>x && root->data>y)
	   {
	   	return common_ancestor(root->left,x,y);
		   }
		   else if(root->data<x && root->data<y)
	   {
	   	return common_ancestor(root->right,x,y);
		   }
		   else if((root->data>x && root->data<y ) || (root->data<x && root->data>y ))
		   {
		   	return root;
		   }
	return root;
}
int main()
{
	node* root=NULL;
	root=insert(root,1);
	insert(root,2);
	insert(root,20);
    insert(root,25);
	insert(root,5);
	node* t=common_ancestor(root,1,5);
	cout<<endl<<t->data;
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
