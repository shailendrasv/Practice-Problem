#include<bits/stdc++.h>

using namespace std;
#define ll long long
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll x=0,y=0;
		ll m;
		cin>>m;
		while(m>0)
		{
			x+=1;
			m=m-1;
			if(m<=0)
			 break;
			y+=1;
			m=m-1;
			if(m<=0)
			 break;
			y+=1;
			m=m-1;
		}
		cout<<x<<" "<<y<<endl;
	}
}
