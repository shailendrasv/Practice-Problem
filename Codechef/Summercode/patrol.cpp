#include<bits/stdc++.h>

using namespace std;
#define ll long long
int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
		ll u,v,x;
		cin>>u>>v>>x;
		double time;
		time=(double)x/(u+v);
		cout<<fixed<<setprecision(10)<<time<<endl;
	}
}
