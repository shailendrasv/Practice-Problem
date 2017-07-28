#include<bits/stdc++.h>

using namespace std;

void printNGE(int arr[],int n)
{
	stack<int> s;
	s.push(arr[0]);
	int next,element;
	
	for(int i=1;i<n;i++)
	{
		next=arr[i];
		
		if(!s.empty())
		{
			element=s.top();
			s.pop();
			while(element<next)
			{
				cout<<element<<"->"<<next<<endl;
				if(s.empty())
				 break;
				element=s.top();
				s.pop();
			}
			if(element>next)
			{
				s.push(element);
			}
		}
		s.push(next);
	}
	while(!s.empty())
	{
		element=s.top();
		s.pop();
		next=-1;
		cout<<element<<"->"<<next<<endl;
	}
}


int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	printNGE(arr,n);
	return 0;
}
