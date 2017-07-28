#include<bits/stdc++.h>

using namespace std;

int isoperand(char ch)
{
	return (ch>='a'&& ch<='z')||(ch>='A'&&ch<='Z')||(ch>='0'&&ch<='9');
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

string infixtopostfix(string exp)
{
	stack<char> st;
	string postfix="";
	for(int i=0;i<exp.length();i++)
	{
		if(isoperand(exp[i]))
		 postfix+=exp[i];
		else if(exp[i]=='(')
		{
			st.push(exp[i]);
		}
		else if(exp[i]==')')
		{
			while(!st.empty() && st.top()!='(')
			{
				postfix+=st.top();
				st.pop();
			}
			if(!st.empty() && st.top()!='(')
			 return "";
			else
			{
				st.pop();
			}
		}
		else
		{
			while(!st.empty()&& prec(exp[i])<=prec(st.top()))
			{
				postfix+=st.top();
				st.pop();
			}
			st.push(exp[i]);
		}
	}
	
	while(!st.empty())
	{
		postfix+=st.top();
		st.pop();
	}
	return postfix;
}

int main()
{
	string exp;
	getline(cin,exp);
	string postf=infixtopostfix(exp);
	cout<<postf;
}
