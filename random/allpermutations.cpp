#include<bits/stdc++.h>

using namespace std;

void swap(char *a,char *b)
{
	char temp;
	temp=*a;
	*a=*b;
	*b=temp;
}

void permute(char str[],int l,int r)
{
	int i;
	if(l==r)
	{
		cout<<str<<endl;
		
	}
	else
	{
		for(i=l;i<=r;i++)
		{
			swap(str+l,str+i);
			permute(str,l+1,r);
			swap(str+l,str+i);
		}
	}
}

int main()
{
    
	string str;
	cin>>str;
	int len=str.size();
	char str1[len];
	strcpy(str1, str.c_str());
	permute(str1,0,len-1);
	
	return 0;
}
