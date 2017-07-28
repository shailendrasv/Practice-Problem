#include<bits/stdc++.h>

using namespace std;

struct Stack
{
	int top;
	unsigned cap;
	int *arr;
};

struct Stack* createStack(unsigned cap)
{
	struct Stack* s=(struct Stack*)malloc(sizeof(struct Stack));
	if(!s)
	 return NULL;
	
	s->top=-1;
	s->cap=cap;
	s->arr=(int *)malloc(s->cap*sizeof(int));
	if(!s->arr)
	 return NULL;
	
	return s;
}

void push(struct Stack* s,char ch)
{
	s->arr[++s->top]=ch;
}

int isempty(struct Stack* s)
{
	return s->top==-1;
}

char peek(struct Stack* s)
{
	return s->arr[s->top];
}

char pop(struct Stack* s)
{
	if(!isempty(s))
	 return s->arr[s->top--];
	return '$';
}

int isoperand( char ch)
{
	return (ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z');
}

int prec(char ch)
{
	switch(ch)
	{
		case '+':
		case '-':
			return 1;
		case '*':
		case '/':
			return 2;
		case '^':
			return 3;
		
	}
	return -1;
}

void infixtopostfix(char* exp)
{
	int i,k=-1;
	
	struct Stack* s=createStack(strlen(exp));
	if(!s)
	 return;
	
	for(i=0;exp[i];i++)
	{
		if(isoperand(exp[i]))
		{
			exp[++k]=exp[i];
		}
		else if(exp[i]=='(')
		{
			push(s,exp[i]);
		}
		else if(exp[i]==')')
		{
			while(!isempty(s) && peek(s)!='(')
			{
				exp[++k]=pop(s);
			}
			if(!isempty(s)&&peek(s)!='(')
			 return;
			else
			 pop(s);
		}
		else
		{
			while(!isempty(s)&& prec(exp[i])<=prec(peek(s)))
			{
				exp[++k]=pop(s);
			}
			push(s,exp[i]);
		}
	}
	while(!isempty(s))
	{
		exp[++k]=pop(s);
	}
	exp[++k]='\0';
	cout<<exp;
	
}

int main()
{
	char str[]="a+b*c+(f+s*d)";
	infixtopostfix(str);
	return 0;
}

