#include<bits/stdc++.h>

using namespace std;

string reverse(string str)
{
	stack<char> st;
	for(int i=0;i<str.length();i++)
	{
		st.push(str[i]);
	}
	for(int i=0;i<str.length();i++)
	{
		str[i]=st.top();
		st.pop();
	}
	return str;
}

int main()
{
	string str;
	getline(cin,str);
	cout<<reverse(str);
	return 0;
}
