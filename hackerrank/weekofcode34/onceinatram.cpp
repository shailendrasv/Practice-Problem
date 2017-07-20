#include <bits/stdc++.h>

using namespace std;

#define max 10000000
#define ll long long
ll onceInATram(ll x) {
    ll i,res=0;
	for(i=x+1;i<max;i++)
	{
		int a=i%1000;
		int b=i/1000;
		int x1=a,x2=b;
		int sum1=0,sum2=0;
		while(a>0)
		{
			int p=a%10;
			sum1=sum1+p;
			a=a/10;
		}
		while(b>0)
		{
			int p=b%10;
			sum2=sum2+p;
			b=b/10;
		}
		if(sum1==sum2)
		{
			res=x2*1000+x1;
			break;
		}
	}
	return res;
}

int main() {
    ll x;
    cin >> x;
    ll result = onceInATram(x);
    cout << result << endl;
    return 0;
}

