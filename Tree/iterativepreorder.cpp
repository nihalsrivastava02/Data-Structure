#include<bits/stdc++.h>
using namespace std;

struct node{
	int data;
	node* left,*right;
	node(int data)
	{
		this->data=data;
		left=right=NULL;
	}
};


void printpreorderiterative(node* root)
{
	if(root==NULL)
		return;
	stack<node*>s;
	s.push(root);
	while(!s.empty())
	{
		node* temp=s.top();
		cout<<temp->data;
		s.pop();
		if(temp->right!=NULL)
			s.push(temp->right);
		if(temp->left!=NULL)
			s.push(temp->left);
		
	}

}

int main()
{
	 struct node *root = new node(10); 
  	root->left        = new node(8); 
  	root->right       = new node(2); 
  	root->left->left  = new node(3); 
  	root->left->right = new node(5); 
  	root->right->left = new node(2); 
	printpreorderiterative(root);
	


return 0;

}
