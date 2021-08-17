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
bool search(node*,int);
int main()
{
	node* root=NULL;
	root=insert(root,30);
	insert(root,10);
	insert(root,200);
    insert(root,25);
	insert(root,5);
	if(search(root,30)==true)
	cout<<"YES FOUNDED"<<endl;
	else
	cout<<"NOT FOUNDED"<<endl;
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
bool search(node* root,int x)
{
	    if(root==NULL)
	    return false;
		if(root->data==x)
		return true;
		else if(root->data < x)
		{
			return search(root->right,x);
		}
		else if(root->data > x)
		{
		return search(root->left,x);
	    }
	    return false;
}
