#include<bits/stdc++.h>

using namespace std;
#define ll long long

int main()
{
	int n;
	cin>>n;
	int arr[n],brr[n];
	int max1=-1,max2=-1,max=-1,gcd=1,flag=0;
	int hasha[1000002]={0};
	int hashb[1000002]={0};

	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
		if(arr[i]>max)
		 max=arr[i];
		hasha[arr[i]]++;
	}
	for(int i=0;i<n;i++)
	{
		cin>>brr[i];
		if(brr[i]>max)
		 max=brr[i];
		hashb[brr[i]]++;
	}
	for(int i=max;i>1;i--)
	{
		int counta=0,countb=0;
		for(int j=i;j<=max;j=j+i)
		{
			if(hasha[j]>=1)
			{
				counta++;
			}
			if(hashb[j]>=1)
			 countb++;
			
			if(counta>=1 && countb>=1)
			{
				gcd=i;
				flag=1;
				break;
			}
		}
		if(flag==1)
		 break;
	}
	for(int i=0;i<n;i++)
	{
		if(arr[i]%gcd==0)
		{
			if(arr[i]>max1)
			 max1=arr[i];
			 
		}
		if(brr[i]%gcd==0)
		{
			if(brr[i]>max2)
			 max2=brr[i];
		}
	}
	int result=max1+max2;
	cout<<result<<endl;
	
	return 0;
}

