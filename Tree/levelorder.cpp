#include<bits/stdc++.h>
using namespace std;
struct node{
	int data;
	struct node* left,*right;
	node(int data)
	{
		this->data=data;
		left=right=NULL;
	}
};


void levelordertraversal(struct node* temp)
{
	if(temp==NULL)
		return;
	
	queue<struct node*>q;
	q.push(temp);
	
	while(q.empty()==false)
	{
		struct node* temp =q.front();
		cout<<temp->data<<" ";
		q.pop();
		if(temp->left!=NULL)
			q.push(temp->left);
		if(temp->right!=NULL)
			q.push(temp->right);
	}
}


int main()
{
	struct node* root;
	root=new node(1);
	root->left=new node(2);
	root->left->left=new node(4);
	root->right=new node(3);
	root->right->right=new node(5);
	

	levelordertraversal(root);
return 0;
}
