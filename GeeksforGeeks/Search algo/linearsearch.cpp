#include<bits/stdc++.h>

using namespace std;

int search(int arr[],int n,int x)
{
	for(int i=0;i<n;i++)
	{
		if(arr[i]==x)
		{
			return i;
		}
	}
	return -1;
}

int main()
{
	int n,x;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		
	}
	cin>>x;
	int index=search(arr,n,x);
	if(index!=-1)
	 cout<<"element is at index"<<index<<endl;
	return 0;
}
