#include<bits/stdc++.h>

using namespace std;

#define ll long long
#define mod1 1000000007
#define mod2 1000000009

ll gcd(ll a, ll b)
{
    if (a == 0)
        return b;
    return gcd(b%a, a);
}


// C function for extended Euclidean Algorithm
ll gcdExtended(ll a, ll b, ll *x,ll *y)
{
    // Base Case
    if (a == 0)
    {
        *x = 0, *y = 1;
        return b;
    }
 
    ll x1, y1; // To store results of recursive call
    ll gcd = gcdExtended(b%a, a, &x1, &y1);
 
    // Update x and y using results of recursive
    // call
    *x = y1 - (b/a) * x1;
    *y = x1;
 
    return gcd;
}

 
// Function to find modulo inverse of a
ll modInverse(ll a, ll m)
{
    ll x, y;
    ll g = gcdExtended(a, m, &x, &y);
    if (g != 1)
        return -1;
    else
    {
        // m is added to handle negative x
        ll res = (x%m + m) % m;
        return res;
    }
}
 



int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll N;
		cin>>N;
		ll n=N-1;
		ll den= 4*n - 2;
		ll gcd1=gcd(n,den);
		ll gcd2=gcd(n+1,den);
		ll p1mod1=(n/gcd1)%mod1;
		ll p2mod1=((n+1)/gcd2)%mod1;
		ll p1mod2=(n/gcd1)%mod2;
		ll p2mod2=((n+1)/gcd2)%mod2;
		ll p1=(p1mod1*p2mod1)%mod1;
		ll p2=(p1mod2*p2mod2)%mod2;
		ll q=(den/(gcd1*gcd2));
		ll qinv1=modInverse(q,mod1);
		ll qinv2=modInverse(q,mod2);
		ll ans1=((p1%mod1)*(qinv1%mod1))%mod1;
		ll ans2=((p2%mod2)*(qinv2%mod2))%mod2;
		cout<<ans1<<" "<<ans2<<endl;

		
		
	}
	return 0;
}
