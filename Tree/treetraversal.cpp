#include<bits/stdc++.h>
using namespace std;

struct Node {
	int data;
	struct Node* left,*right;
	Node(int data)
	{
		this->data=data;
		left=right=NULL;
	}
};

void postorder(struct Node* node)
{
	if(node==NULL)
		return;
	postorder(node->left);
	postorder(node->right);
	cout<<node->data<<" "<<endl;
}

void inorder(struct Node* node)
{
	if(node==NULL)
		return;
	inorder(node->left);
	cout<<node->data<<" "<<endl;
	inorder(node->right);
}

void preorder(struct Node* node)
{
	if(node==NULL)
		return;
	cout<<node->data<<" "<<endl;
	preorder(node->left);
	preorder(node->right);
}


int main()
{
	struct Node* root;
	root=new Node(1);
	root->left=new Node(2);
	root->right=new Node(3);
	root->left->left=new Node(4);
	root->left->right=new Node(5);
	
	inorder(root);
	postorder(root);
	preorder(root);

return 0;
}
