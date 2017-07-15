#include<bits/stdc++.h>

using namespace std;


struct node
{
	int data;
	struct node *next;
	
};

struct Queue
{
	struct node *front,*rear;
};

struct node* newnode(int data)
{
	struct node *node=(struct node*)malloc(sizeof(struct node));
	node->data=data;
	node->next=NULL;
	return node;
}

struct Queue *createq()
{
	struct Queue *q=(struct Queue*)malloc(sizeof(struct Queue));
	q->front=q->rear=NULL;
	return q;
}

void enqueue(struct Queue *q,int data)
{
	struct node *node=newnode(data);
	
	if(q->rear==NULL)
	 {
	 	q->front=q->rear=node;
	 	return;
	 }
	 q->rear->next=node;
	 q->rear=node;
	
}

struct node* dequeue(struct Queue* q)
{
	if(q->front==NULL)
	 return NULL;
	 
	struct node *temp=q->front;
	q->front=q->front->next;
	
	if(q->front==NULL)
	 q->rear=NULL;
	return temp;
}





int main()
{
	struct Queue *q=createq();
	enqueue(q, 10);
    enqueue(q, 20);
    dequeue(q);
    dequeue(q);
    enqueue(q, 30);
    enqueue(q, 40);
    enqueue(q, 50);
    struct node* qn=dequeue(q);
    cout<<"dequeued :"<<qn->data;
    
    
	return 0;
}
