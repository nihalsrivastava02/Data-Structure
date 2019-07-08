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


int findheight(node* root)
{
	if(root==NULL)
		return 0;

	queue<node*>q;
	int height=0;
	q.push(root);
	while(1)
	{
		int nodecount=q.size();
		if(nodecount==0)
			return height;
		height++;
		while(nodecount>0)
		{
			node* temp=q.front();
			q.pop();
			if(temp->left!=NULL)
				q.push(temp->left);
			if(temp->right!=NULL)
				q.push(temp->right);
			nodecount--;
		}
	}
return height;
}


int main()
{
	node* main=new node(1);
	main->left=new node(2);
	main->right=new node(3);
	main->left->left=new node(4);

	cout<<findheight(main);
return 0;

}	
