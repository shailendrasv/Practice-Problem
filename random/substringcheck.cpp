#include<bits/stdc++.h>

using namespace std;



int indsearch(char str[],char substr[])
{
	int i=0,j=0,index;
	while(str[i] != '\0')
    {
    	while(str[i]!=substr[0] && str[i]!= '\0')
    	 i++;
    	
    	if(str[i]=='\0')
    	{
    		return -1;
		}
    	
    	index=i;
    	
    	while(str[i]==substr[j] && str[i]!= '\0' && substr[j]!= '\0')
    	{
    	
    		i++;
    		j++;
    		
		}
		if(substr[j]== '\0')
		{
			return index;
		}
		if(str[i]=='\0')
		{
		 return -1;

		}
		
		i=index+1;
		j=0;
    	
	}
	
}

int main()
{
    char str[1000],substr[1000];
    cin>>str;
    cin>>substr;
    int flag;
    flag=indsearch(str,substr);
    if(flag==-1)
	 cout<<"Not found"<<endl;
	 
	else
	 cout<<flag+1<<endl;
		
	return 0;
}
