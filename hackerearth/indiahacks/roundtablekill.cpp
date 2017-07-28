#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n,k,x;
	
	scanf("%d %d %d",&n,&k,&x);
	bool arr[n+1];
	memset(arr,true,sizeof(arr));
	arr[0]=false;
	int rem=n;
	int i=x,ans,flag=0;
	while(true)
	{
		int c=i%k;
		int j=i+1;
		if(j>n)
		 j=1;
		while(c>0)
		{
			if(arr[j])
			{
				arr[j]=false;
				c--;
			}
			j++;
			if(j>n)
			 j=1;
			if(j==i)
			{
				ans=i;
				flag=1;
				break;	
			}
		}
		i=j;
		if(i>n)
		 i=1;
		while(!arr[i])
		{
			i++;
			if(i>n)
			 i=1;
		}
		if(flag==1)
		 break;
		
	}
	cout<<ans;
}
