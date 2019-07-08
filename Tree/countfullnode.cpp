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


int countfullnode(node* root)
{
	if(root==NULL)
		return 0;	
	queue<node*>q;
	int count=0;
	q.push(root);
	while(!q.empty())
	{
		node* temp=q.front();
		q.pop();
		if(temp->left!=NULL and temp->right!=NULL)
			count++;
		if(temp->left!=NULL)
			q.push(temp->left);
		if(temp->right!=NULL)
			q.push(temp->right);
	}
return count;

}


int main()
{
	node* main=new node(1);
	main->left=new node(2);
	main->right=new node(3);
	main->left->left=new node(4);
	main->left->right=new node(5);
	cout<<countfullnode(main);


return 0;

}
