//without recursion

#include<bits/stdc++.h>

using namespace std;

struct tnode
{
	int data;
	struct tnode* left;
	struct tnode* right;
};

struct snode
{
	struct tnode *t;
	struct snode *next;
};

//void push(struct snode** top,struct tnode *t);
//struct tnode * pop(struct snode** top);
//bool isempty(struct snode* top);

struct tnode* newnode(int data)
{
	struct tnode* tnode=(struct tnode*)malloc(sizeof(struct tnode));
	tnode->data=data;
	tnode->left=NULL;
	tnode->right=NULL;
	return tnode;
}

void push(struct snode** top,struct tnode* t)
{
	struct snode* snode=(struct snode*)malloc(sizeof(struct snode));
	
	if(snode==NULL)
	{
		cout<<"Overflow";
		exit(0);
	}
	snode->t=t;
	snode->next=(*top);
	(*top)=snode;
}
bool isempty(struct snode* top)
{
	return (top==NULL)?1:0;
}

struct tnode* pop(struct snode** tops)
{
	struct tnode* res;
	struct snode* top;
	if(isempty(*tops))
	 {
	 	cout<<"Underflow";
	 	exit(0);
	 }
	else
	{
		top=*tops;
		res=top->t;
		*tops=top->next;
		free(top);
		return res;
	}
	 
}

 void inorder(struct tnode* root)
 {
 	struct tnode* current=root;
 	struct snode* s=NULL;
 	bool flag=0;
 	
 	while(!flag)
 	{
 		if(current!=NULL)
 		{
 			push(&s,current);
 			current=current->left;
		 }
		 
		 else
		 {
		 	if(!isempty(s))
		 	{
		 		current=pop(&s);
		 		cout<<current->data<<" ";
		 		current=current->right;
			 }
			 else
			 {
			   flag=1;
			 }
		 }
	 }
 }
 
 
 int main()
 {
 	struct tnode* root=newnode(1);
    root->left        = newnode(2);
    root->right       = newnode(3);
    root->left->left  = newnode(4);
    root->left->right = newnode(5); 
    
    inorder(root);
    return 0;
 
 }



