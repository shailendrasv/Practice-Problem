#include<bits/stdc++.h>

using namespace std;

struct node
{
	int data;
	struct node* next;
};

struct node* newnode(int data)
{
	struct node* snode=(struct node*)malloc(sizeof(struct node));
	snode->data=data;
	snode->next=NULL;
	return snode; 
}

int isempty(struct node* snode)
{
	return !snode;
}

void push(struct node** s,int data)
{
	struct node* snode=newnode(data);
	snode->next=*s;
	*s=snode;
	
}

int pop(struct node** s)
{
	if(isempty(*s))
	{
		return INT_MIN;
	}
	struct node* temp=*s;
	*s=(*s)->next;
	int popd=temp->data;
	free(temp);
	return popd;
	
}

int peek(struct node* s)
{
	if(isempty(s))
	 return INT_MIN;
	return s->data;
}

int main()
{
	struct node *stack=NULL;
	
	push(&stack,10);
	push(&stack,20);
	push(&stack,50);
	push(&stack,70);
	cout<<pop(&stack)<<endl;
	cout<<peek(stack);
	return 0;
}
