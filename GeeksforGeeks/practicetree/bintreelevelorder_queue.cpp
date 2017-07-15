#include<bits/stdc++.h>

using namespace std;
#define maxs 500

struct node
{
	int data;
	struct node *left;
	struct node *right;
	
};

struct node** createq(int *f,int *r)
{
	struct node **q=(struct node **)malloc(sizeof(struct node*)*maxs);
	*f=*r=0;
	return q;
	
}

void enqueue(struct node ** q,int *rear,struct node *newnode)
{
	q[*rear]=newnode;
	(*rear)++;
}

struct node *dequeue(struct node **q,int *front)
{
	(*front)++;
	return q[*front-1];
}

struct node *newnode(int data)
{
	struct node* node=(struct node*)malloc(sizeof(struct node));
	node->data=data;
	node->left=NULL;
	node->right=NULL;
	return node;
}

void levelorder( struct node *root)
{
	int rear,front;
	struct node **q=createq(&front,&rear);
	struct node* temp=root;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		
		if(temp->left)
		  enqueue(q,&rear,temp->left);
		if(temp->right)
		  enqueue(q,&rear,temp->right);
		
		temp =dequeue(q,&front);
	}
}

int main()
{
	struct node* root=newnode(1);
	root->left=newnode(2);
	root->right=newnode(3);
	root->left->left=newnode(4);
	root->left->right=newnode(6);
	
	cout<<"level order :";
	levelorder(root);
}
