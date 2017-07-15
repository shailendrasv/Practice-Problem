#include<bits/stdc++.h>

using namespace std;

struct node
{
	int data;
	struct node *l;
	struct node *r;
};

struct node* newnode(int data)
{
	struct node *node=(struct node*)malloc(sizeof(struct node));
	node->data=data;
	node->l=NULL;
	node->r=NULL;
	return (node);
}

void preorder(struct node * root)
{
	if(root==NULL)
	 return;
	cout<<root->data;
	preorder(root->l);
	preorder(root->r);
}

void inorder(struct node *root)
{
	if(root==NULL)
	 return;
	inorder(root->l);
	cout<<root->data;
	inorder(root->r);
	
}

void postorder(struct node *root)
{
	if(root==NULL)
	 return;
	postorder(root->l);
	postorder(root->r);
	cout<<root->data;
}

int main()
{
	struct node *root=newnode(1);
	root->l=newnode(2);
	root->r=newnode(3);
	root->l->l=newnode(4);
	root->l->r=newnode(5);
	root->r->l=newnode(6);
	
	cout<< "Preorder :";
	preorder(root);
	cout<< "\nInorder :";
	inorder(root);
	cout<< "\nPostorder :";
	postorder(root);

	
	
	return 0;
}
