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
void postorder(node*);
void inorder(node*);
void preorder(node*);
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
void preorder(node* root)
{
	if(root==NULL)
	return;
	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}
void inorder(node* root)
{
	if(root==NULL)
	return;
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}
void postorder(node* root)
{
	if(root==NULL)
	return;
	postorder(root->left);
	postorder(root->right);
	cout<<root->data<<" ";
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
	cout<<"ELEMENTS ARRANGED IN PREORDER TRAVERSAL : "<<endl;
	preorder(root);
	cout<<endl<<"ELEMENTS ARRANGED IN INORDER TRAVERSAL : "<<endl;
	inorder(root);
	cout<<endl<<"ELEMENTS ARRANGED IN POSTORDER TRAVERSAL : "<<endl;
	postorder(root);
}
