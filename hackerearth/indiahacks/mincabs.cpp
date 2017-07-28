#include<bits/stdc++.h>

using namespace std;

int findcabs(int arr[], int fin[], int n)
{

sort(arr, arr+n);
sort(fin, fin+n);


int cab = 1, result = 1;
int i = 1, j = 0;

while (i < n && j < n)
{

	if (arr[i] <= fin[j])
	{
		cab++;
		i++;
		if (cab > result) 
			result = cab;
	}
	else 
	{
		cab--;
		j++;
	}
}

return result;
}

int main()
{
	int n;
	scanf("%d",&n);
	int arr[n],fin[n];
	for(int i=0;i<n;i++)
	{
		int hh1,mm1,hh2,mm2;
		scanf("%d %d %d %d",&hh1,&mm1,&hh2,&mm2);
	
			arr[i]=hh1*100+mm1;
		
	
			fin[i]=hh2*100+mm2;
	
		
	}
/*	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
	for(int i=0;i<n;i++)
	{
		cout<<fin[i]<<" ";
	}
	cout<<endl;
	*/
	int mincabs=findcabs(arr,fin,n);
	printf("%d",mincabs);
	
	return 0;
}
