#include<bits/stdc++.h>

using namespace std;
/*
int bsearch(int arr[],int l, int r,int x)//recursive
{
	if(r>=l)
	{
		int mid=l+(r-1)/2;
	
	if(arr[mid]==x)
	{
		return mid;
	}
	else if(arr[mid]>x)
	{
		return bsearch(arr,l,mid-1,x);
	}
	else
	 return bsearch(arr,mid+1,r,x);
	}
	return -1;
}
*/

int bsearch(int arr[],int l,int r,int x)//iterative
{
	while(l<=r)
	{
		int mid=l+(r-1)/2;
		
		if(arr[mid]==x)
		 return mid;
		else if(arr[mid]>x)
		 r=mid-1;
		else
		 l=mid+1;
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
	int index=bsearch(arr,0,n-1,x);
	if(index!=-1)
	 cout<<"element is at index"<<index<<endl;
	
	return 0;
}
