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


int countleaf(node* root)
{
	if(root==NULL)
		return 0;
	queue<node*> q;
	q.push(root);
	int count=0;
	while(!q.empty())
	{
		node* temp=q.front();
		q.pop();
		if(temp->left!=NULL)
			q.push(temp->left);
		if(temp->right!=NULL)
			q.push(temp->right);
		if(temp->left==NULL && temp->right==NULL)
			count++;
	}
return count;
}


int main()
{	
	node* main=new node(1);
	main->left=new node(2);
	main->right=new node(3);
	cout<<countleaf(main);
return 0;
}
