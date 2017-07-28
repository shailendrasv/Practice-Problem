#include<bits/stdc++.h>

using namespace std;

//using recursion

void insertatbottom(stack<int> s,int data)
{
	if(s.empty())
	{
		s.push(data);
	}
	else
	{
		int item=s.top();
		s.pop();
		insertatbottom(s,data);
		s.push(item);
	}
}

void reverse(stack<int> s)
{
	if(!s.empty())
	{
		int temp=s.top();
		s.pop();
		reverse(s);
		insertatbottom(s,temp);
	}
}

int main()
{
	stack<int> s;
	s.push(1);
	s.push(5);
	s.push(2);
	s.push(6);
	reverse(s);
	while(!s.empty())
	{
		cout<<s.top()<<" ";
		s.pop();
	}
	return 0;
}
