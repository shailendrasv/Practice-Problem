#include<bits/stdc++.h>

using namespace std;

class twostacks
{
	int *arr;
	int size;
	int top1,top2;
	public:
		twostacks(int n)
		{
			size=n;
			arr=new int[n];
			top1=-1;
			top2=size;
		}
		
		void push1(int data)
		{
			if(top1<top2-1)
			{
				top1++;
				arr[top1]=data;
			}
			else
			{
				cout<<"Stack1 overflow";
				return;
			}
		}
		void push2(int data)
		{
			if(top1<top2-1)
			{
				top2--;
				arr[top2]=data;
			}
			else
			{
				cout<<"Stack2 overflow";
				return;
			}
		}
		int pop1()
		{
			if(top1>=0)
			{
				int x=arr[top1];
				top1--;
				return x;
			}
			else
			{
				cout<<"Stack1 underflow";
				return -1;
			}
		}
		int pop2()
		{
			if(top2<size)
			{
				int x=arr[top2];
				top2++;
				return x;
			}
			else
			{
				cout<<"Stack2 underflow";
				return -1;
			}
		}
};

int main()
{
	twostacks ts(5);
	ts.push1(2);
	ts.push2(3);
	ts.push1(9);
	ts.push1(7);
	ts.push2(2);
	cout<<ts.pop1();
	cout<<ts.pop2();
	return 0;
}
