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



int counthalf(struct node* root)
{
	int count=0;
	if(root==NULL)
		return 0;
	

	queue<struct node*>q;
	q.push(root);
	while(!q.empty())
	{
		struct node* temp=q.front();
		q.pop();
		if((!temp->left && temp->right)||(temp->left && !temp->right))
		{
			count++;
		}
		
        	if (temp->left != NULL) 
            		q.push(temp->left); 
       		if (temp->right != NULL) 
            		q.push(temp->right); 
	}
	return count;
}


int main()
{
	struct node* main=new node(1);
	main->left=new node(2);
	main->right=new node(3);
	main->left->left=new node(4);

	cout<<counthalf(main);
return 0;
}
