#include<bits/stdc++.h>
using namespace std;
struct node
{
	int data;
	node* left;
	node* right;
	node(int data)
	{
		this->data=data;
		left=right=NULL;
	}
};
void postorder(node*);
void inorder(node*);
void preorder(node*);
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
	root=new node(4);
	root->left=new node(8);
	root->right=new node(5);
	root->left->left=new node(1);
	root->left->right=new node(2);
	root->right->left=new node(9);
	root->right->right=new node(10);
	cout<<"ELEMENTS ARRANGED IN PREORDER TRAVERSAL : "<<endl;
	preorder(root);
	cout<<endl<<"ELEMENTS ARRANGED IN INORDER TRAVERSAL : "<<endl;
	inorder(root);
	cout<<endl<<"ELEMENTS ARRANGED IN POSTORDER TRAVERSAL : "<<endl;
	postorder(root);
}
