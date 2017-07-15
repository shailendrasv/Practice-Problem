#include<bits/stdc++.h>

using namespace std;

struct Queue
{
	int front,rear,size;
	unsigned int cap;
	int *arr;
};

struct Queue * createq(unsigned cap)
{
	struct Queue * q=(struct Queue*)malloc(sizeof(struct Queue));
	q->cap=cap;
	q->front=q->size=0;
	q->rear=cap-1;
	q->arr=(int *)malloc(q->cap*sizeof(int));
	return q;
	
}

int isfull(struct Queue *q)
{
	return(q->size==q->cap);
}

int isempty(struct Queue *q)
{
	return(q->size==0);
}

void enqueue(struct Queue *q,int data)
{
	if(isfull(q))
	 return;
	q->rear=(q->rear+1)%q->cap;
	q->arr[q->rear]=data;
	q->size=q->size+1;
	cout<<data<<" enqued\n";
}

int dequeue(struct Queue *q)
{
	if(isempty(q))
	 return INT_MIN;
	int x=q->arr[q->front];
	q->front=(q->front+1)%q->cap;
	q->size=q->size-1;
	return x;
}

int front(struct Queue *q)
{
	if(isempty(q))
	 return INT_MIN;
	return (q->arr[q->front]);
	
}

int rear(struct Queue *q)
{
	if(isempty(q))
	 return INT_MIN;
	return (q->arr[q->rear]);
}




int main()
{
	struct Queue *q=createq(50);
	
	enqueue(q,10);
	enqueue(q,20);
	enqueue(q,30);
	enqueue(q,40);
	enqueue(q,50);
	
	cout<<"dequeued :"<<dequeue(q)<<endl;
	
	cout<<"front elem :"<<front(q)<<endl;
	cout<<"rear elem:"<<rear(q)<<endl;
	
	

	return 0;
}
