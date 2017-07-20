#include<bits/stdc++.h>

using namespace std;
#define ll long long
int gcdno(int a,int b) {
    int temp;
    while(b > 0) {
        temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main()
{
	ll n;
	cin>>n;
	int arr[n],brr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n;i++)
	{
		cin>>brr[i];
	}
	ll maxgcd=1,sum=0;
	for(int j=0;j<n;j++)
	{
		for(int k=0;k<n;k++)
		{
			ll gcd=gcdno(arr[j],brr[k]);
			if(gcd>maxgcd)
			{
				maxgcd=gcd;
				sum=arr[j]+brr[k];
			}
			else if(gcd=maxgcd)
			{
				ll nsum=arr[j]+brr[k];
				if(nsum>sum)
				 sum=nsum;
			}
		}
	}
	
	cout<<sum<<endl;
	
	return 0;
}

