#include<bits/stdc++.h>

using namespace std;

int findsource(vector<string> s,vector<string> d)
{
    int i;
    for( i=0;i<s.size();i++)
	{
		int j=0;
		for( j=0;j<d.size();j++)
		{
			if(s[i].compare(d[j])==0)
			{
				break;
			}
		}
		
		if(j==d.size())
		  break;
	}
	return i;
}


int searchnext(vector<string> s,vector<string> d,int i)
{
    for(int j=0;j<s.size();j++)
	    {
	        if(s[j].compare(d[i])==0)
	        {
	            i=j;
	            break;
	        }
	    }
	    return i;
}


int main()
{
    int i,k=0;
	string str1,str2;
	vector<string> source,dest;
	while((cin>>str1)&&(cin>>str2))
	{
		source.push_back(str1);
		dest.push_back(str2);
		k++;
	}
	
	i=findsource(source,dest);
	cout<<source[i];
	
	while(k--)
	{
	    cout<<" "<<dest[i];
	    i=searchnext(source,dest,i);
	}
	return 0;
}
