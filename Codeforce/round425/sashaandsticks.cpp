#include<bits/stdc++.h>

using namespace std;
#define ll long long
int main()
{
	ll n,k;
	cin>>n>>k;
	ll q=n/k;
	
	
	if(q%2==1)
	 printf("YES");
	else
	 printf("NO");
	
	return 0;
}
