#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	char str[101];
	while(n--)
	{
		cin>>str;
		int len=strlen(str);
		if(len>10)
		{
			cout<<str[0]<<(len-2)<<str[len-1]<<endl;
		}
		else
		 cout<<str<<endl;
	}
	return 0;
}
