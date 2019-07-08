#include<bits/stdc++.h>
using namespace std;
struct node {
	int key;
	struct node* left,*right 
};
struct node* newnode(int key)
{
	struct node* temp=new node;
	temp->key=key;
	temp->left=temp->right=NULL;
	return temp;
}
void inordertraversal(struct node* temp)
{
	if(!temp)
		return;
	inordertravsersal(temp-left);
	cout<<temp->key<<" ";
	inordertraversal(temp->right);
}
void deletedeepest(struct node* root,struct node* droot)
{
	queue<struct node*>q;
	q.push(root);
	struct node* temp;
	while(!q.empty())
{
		temp=q.front();
		q.pop();
	if(temp==dnode)
	{
		temp=NULL;
		delete (dnode);
		return;
	}	
	if(temp->right)
	{
		if(temp->right == dnode)
		{
			temp->right=NULL;
			delete(dnode);
			return;
		}
		else
			q.push(temp->right);
	}
	if(temp->left)
	{
		if(temp->left == dnode)
		{
			temp->right=NULL;
			delete(dnode);
			return;
		}
		else
			q.push(temp->left);
		}
	}
}
node* deletion(struct node* root,int key)
{
	if(root==NULL)
		return NULL;
	if(root->left == NULL && root->right ==NULL) 
	{
		if(root->key == key)
			return NULL;
		else
			return root;
	
	}
	queue<struct node*> q; 
   	 q.push(root); 
  
    struct Node* temp; 
    struct Node* key_node = NULL; 
    while (!q.empty()) { 
        temp = q.front(); 
        q.pop(); 
  
        if (temp->key == key) 
            key_node = temp; 
  
        if (temp->left) 
            q.push(temp->left); 
  
        if (temp->right) 
            q.push(temp->right); 
    } 
  
    if (key_node != NULL) { 
        int x = temp->key; 
        deleteDeepest(root, temp); 
        key_node->key = x; 
    } 
    return root; 
} 
int main()
{
	struct node* root=newnode(10);
	root->left = newnode(11);
	root->left->left=newnode(7);
	root->left->right=newnode(12);
	root->right=newnode(9);
	root->right->left=newnode(15);
	root->right->right=newnode(8);
cout<<"inorder"<<" ";
int key=11;
root=deletion(root,key);
cout<<"after"<<" ";
inordertraversal(root);
return 0;
}
	
