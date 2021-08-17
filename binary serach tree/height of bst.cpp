#include<bits/stdc++.h>
using namespace std;
struct node
{
	int data;
	node* left;
	node* right;
};
node* insert(node*,int);
node* create(node*);
int height(node*);
node* create(int data)
{
	node* temp=new node();
	temp->data=data;
	temp->left=NULL;
	temp->right=NULL;
	return temp;
}
node* insert(node* root , int data)
{
	if(root==NULL)
	{
		root=create(data);
	}
	else if(root->data>data)
	{
			root->left=insert(root->left,data);
	}
		else if(root->data<data)
	{
			root->right=insert(root->right,data);
	}
	return root;
}
int height(node* root)
{
	if(root==NULL)
	return -1;
	int lh=height(root->left);
	int rh=height(root->right);
	return max(lh,rh)+1;
}
int main()
{
	node* root=NULL;
	root=insert(root,12);
	insert(root,10);
	insert(root,30);
	insert(root,15);
	insert(root,45);
	insert(root,9);
	insert(root,1);
	insert(root,5);
	insert(root,4);
	int h=height(root);
	cout<<"HEIGHT OF BST IS = "<<h;
}
