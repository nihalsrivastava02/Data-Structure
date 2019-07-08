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


void inorder(struct node* temp)
{
	stack<struct node*>s;
	node* cur=temp;
	while(cur!=NULL || s.empty()==false)
	{
		
