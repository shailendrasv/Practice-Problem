#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,k,p=0;
	cin>>n>>k;
	int score[n];
	for(int i=0;i<n;i++)
	 cin>>score[i];
	
	int count=0;
	for(int i=0;i<n;i++)
	{
		if(score[i]>=score[k-1] && score[i]>0)
		 count++;
	}
	
	cout<<count<<endl;
	return 0;

	
	
}
