#include<bits/stdc++.h>

using namespace std;

#define ll long long
struct CompareByFirst {
    bool operator()(pair<int, int> a,
                              pair<int, int> b)
    { return a.second < b.second; }
};



int main()
{
	int t,a,b;
	cin>>t;
	priority_queue<pair<int, int>,
                   std::vector<pair<int, int> >,
                   CompareByFirst> myQueue;
                   
	while(t--)
	{
		vector< pair<int,int> > P[100005];
		int n,d;
		ll sum=0;
		cin>>n>>d;
		int di[n],ti[n],si[n];
		
		for(int i=0;i<n;i++)
		{
			cin>>di[i]>>ti[i]>>si[i];
			P[di[i]].push_back(make_pair(ti[i],si[i]));
		}
		
		for(int i=1;i<=d;i++)
		 {
		 	for(int j=0;j<P[i].size();j++)
		 	 myQueue.push(make_pair(P[i][j].first,P[i][j].second));
		 	 
		 	if(myQueue.size()==0)
			 continue;
			   
		 	 a=myQueue.top().first;
		 	 b=myQueue.top().second;
		 	  
		 	  a=a-1;
		 	   
		 	  myQueue.pop();
		 	   
		 	   if(a!=0)
		 	    myQueue.push(make_pair(a,b));
		 	
		 }
		 
		 while(myQueue.size()!=0)
		 {
		 	int x,y;
		 	x=myQueue.top().first;
		 	y=myQueue.top().second;
		 	sum=sum+(ll)x*y;
		 	myQueue.pop();
		 }
		
		cout<<sum<<endl;
		
	}
	return 0;
}
