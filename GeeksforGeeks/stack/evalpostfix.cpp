#include<bits/stdc++.h>

using namespace std;

int evaluatepostfix(string str)
{
	stack<int> st;
	
	for(int i=0;i<str.length();i++)
	{
		if(isdigit(str[i]))
		 st.push(str[i]-'0');
		
		else
		{
			int val1=st.top();
			st.pop();
			int val2=st.top();
			st.pop();
			switch(str[i])
			{
				case '+':st.push(val2+val1); break;
				case '-':st.push(val2-val1); break;
				case '*':st.push(val2*val1); break;
				case '/':st.push(val2/val1); break;
				case '^':st.push(pow(val2,val1)); break;
			}
		}
	}
	int res=st.top();
	st.pop();
	return res;
}

int main()
{
	string pexp;
	getline(cin,pexp);
	int ans=evaluatepostfix(pexp);
	cout<<ans;
	return 0;
}
