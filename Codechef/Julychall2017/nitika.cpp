#include<bits/stdc++.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	char str[40];
	cin.getline(str,40);

	while(n--)
	{
		cin.getline(str,40);
		int len=strlen(str);
		int csp=0,sp[3]={-1,-1,-1};
		for(int i=0;i<len;i++)
		{
			
			if(str[i]==' ')
			{
				sp[csp]=i;
				csp++;
			}
			 
		}
		//cout<<sp[0]<<" "<<sp[1]<<endl;
		if(sp[0]!=-1 && sp[1]!=-1)
		{
			str[0]=toupper(str[0]);
			str[sp[0]+1]=toupper(str[sp[0]+1]);
			str[sp[1]+1]=toupper(str[sp[1]+1]);
			cout<<str[0]<<". "<<str[sp[0]+1]<<". "<<str[sp[1]+1];
			for(int i=sp[1]+2;i<len;i++)
			 {
			    str[i]=tolower(str[i]);
			    cout<<str[i];
			  
		     }
		}
		else if(sp[0]!=-1 && sp[1]==-1)
		{
			str[0]=toupper(str[0]);
			str[sp[0]+1]=toupper(str[sp[0]+1]);
			cout<<str[0]<<". "<<str[sp[0]+1];
			for(int i=sp[0]+2;i<len;i++)
			 {
			 	str[i]=tolower(str[i]);
			 	cout<<str[i];
			 }
		}
		else
		{
			str[0]=toupper(str[0]);
			for(int i=1;i<len;i++)
			 str[i]=tolower(str[i]);
			cout<<str;
		}
		cout<<endl;
		
		
	}
	return 0;
}
