#include<bits/stdc++.h>
using namespace std;
struct node {
int key;
struct node* left,*right;
};

struct node* newnode(int key)
	{
		struct node* temp=new node;
		temp->key=key;
		temp->left=temp->right=NULL;
		return temp;
	}
void inordertraversal(node *temp)
	{
		if(!temp)
			return;
		inordertraversal(temp->left);
		cout<<temp->key<<" ";
		inordertraversal(temp->right);
	}

void insert(struct node* temp,int key)
{
	queue<struct node*>q;
	q.push(temp);
	while(!q.empty())
	{	
		struct node*temp = q.front();
		q.pop();
		if(!temp->left){
			temp->left=newnode(key);
			break;
		}
		else
			q.push(temp->left);
		if(!temp->right)
		{
			temp->right=newnode(key);
			break;
		}
		else
		{
			q.push(temp->right);
		}
	}
}
int main()
{
	struct node* root=newnode(18);
	root->left=newnode(11);
	root->left->left=newnode(7);
	root->right=newnode(9);
	root->right->left=newnode(15);
	root->right->right=newnode(8);
	cout<<"inorder before"<<endl;
	inordertraversal(root);
	int key=12;


	insert(root,key);
	cout<<"after"<<endl;
	inordertraversal(root);
	return 0;
}
	
		


