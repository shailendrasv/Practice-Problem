#include<bits/stdc++.h>

using namespace std;

struct node
{
	int data;
	struct node *left;
	struct node *right;
};

struct node * newnode(int data)
{
	struct node * node=(struct node*)malloc(sizeof(struct node));
	node->data=data;
	node->left=NULL;
	node->right=NULL;
	return (node);
}

int maxheight(struct node*root)
{
	if(root==NULL)
	 return -1;
	else
	{
		int lheight=maxheight(root->left);
		int rheight=maxheight(root->right);
		
		if(lheight>rheight)
		  return(lheight+1);
		else
		 return(rheight+1);
	}
}


int main()
{
	struct node *root=newnode(1);
	root->left=newnode(2);
	root->right=newnode(3);
	root->left->left=newnode(4);
	root->left->right=newnode(5);
	root->left->left->left=newnode(6);
	cout<<"Height of tree is "<<maxheight(root);
	return 0;
}
