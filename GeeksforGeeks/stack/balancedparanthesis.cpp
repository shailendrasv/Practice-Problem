#include<bits/stdc++.h>

using namespace std;

bool ismatching(char ch1,char ch2)
{
	if(ch1=='('&&ch2==')')
	 return 1;
	else if(ch1=='{'&&ch2=='}')
	 return 1;
	else if(ch1=='['&&ch2==']')
	 return 1;
	else
	 return 0;
}
bool isbalanced(string str)
{
	
	stack <char> st;
	for(int i=0;i<str.length();i++)
	{
		if(str[i]=='{'||str[i]=='('||str[i]=='[')
		 st.push(str[i]);
		
		if(str[i]=='}'||str[i]==')'||str[i]==']')
		{
			if(st.empty())
			 return 0;
			 
			else if(!ismatching(st.top(),str[i]))
			{
				return 0;
			}
			st.pop();
		}
	}
	if(st.empty())
	 return 1;
	else
	 return 0;
}

int main()
{
	string str;
	getline(cin,str);
	if(isbalanced(str))
	 cout<<"Balanced";
	else
	 cout<<"Not Balanced";
	
	return 0;
}
