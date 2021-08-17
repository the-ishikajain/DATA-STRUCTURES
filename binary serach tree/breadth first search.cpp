#include<bits/stdc++.h>
#include<queue>
using namespace std;
struct node
{
	int data;
	node* left;
	node* right;
};
node* insert(node*,int);
node* create(node*);
void bfs(node*);
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
void bfs(node* root)
{
	if(root==NULL)
	return;
	queue<node*> q;
	q.push(root);
	while(!q.empty())
	{
		node* temp=q.front();
		cout<<temp->data<<" ";
		if(temp->left!=NULL)
		{
			q.push(temp->left);
		}
		if(temp->right!=NULL)
		{
			q.push(temp->right);
		}
		q.pop();
	}
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
	insert(root,1);
	cout<<"ELEMENTS ARRANGED IN BREADTH FIRST SERACH / LEVEL ORDER TRAVERSAL : "<<endl;
	bfs(root);    //12 10 30 8 15 45 1 5
}
