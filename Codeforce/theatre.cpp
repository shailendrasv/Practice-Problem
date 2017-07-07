#include<iostream>
#include<cstdio>

using namespace std;
int main()
{
	long long n,m,a,nn,nm,res;
	
	cin>>n>>m>>a;
	
	if(n%a==0)
	 nn=n/a;
	else
	{
		nn=n/a;
		nn++;
	}
	if(m%a==0)
	 nm=m/a;
	else
	{
		nm=m/a;
		nm++;
	}
	
	cout<<nn*nm<<endl;
	
	return 0;

}
