#include<bits/stdc++.h>

using namespace std;

int maxRepeatingchar(string str)
{
    int n = str.length();
    int i=0,c=0;
    while(str[i]!='\0')
    {
    	if(str[i]=='=')
    	 {
    	 	i++;
    	 	int count=1;
    	 	if(count>c)
			 c=count;
    	 	continue;
    	 }
    	
    	else if(str[i]=='<')
    	{
    		int count=1;
    		while(i<n && (str[i]=='<'||str[i]=='='))
    		{
    			if(str[i]=='<')
    			 count++;
    			 
    			i++;
			}
			if(count>c)
			 c=count;
		}
		
		else if(str[i]=='>')
    	{
    		int count=1;
    		while(i<n && (str[i]=='>'||str[i]=='='))
    		{
    			if(str[i]=='>')
    			 count++;
    			 
    			i++;
			}
			if(count>c)
			 c=count;
		}
    	
	}
 
   
    
    return c;
}
 

int main()
{
	long n;
	cin>>n;
	
	while(n--)
	{
		string str;
		cin>>str;
		int count=maxRepeatingchar(str);
		
		cout<<count<<endl;
		
		
		
	}
	return 0;
}
