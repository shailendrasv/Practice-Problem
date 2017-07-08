#include<bits/stdc++.h>

using namespace std;
#define ll long long
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
	   ll n,b;
	   cin>>n>>b;
	   ll x=(n+b)/(2*b);
	   ll y=x*b;
	   ll z=n-y;
	   ll ans= z*x;
	   cout<<ans<<endl;	
	}
}
