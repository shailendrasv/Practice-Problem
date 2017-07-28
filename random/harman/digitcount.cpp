#include<bits/stdc++.h>
#define ll long long
using namespace std;

void countdig(ll);
ll A[11];
 
int main()
{
   ll h1,m1,s1,h2,m2,s2;

   cin>>h1>>m1>>s1;
   cin>>h2>>m2>>s2;
     
     for(ll i=0;i<=10;i++)
      A[i]=0;
    
    if(h1==h2 && m1==m2 && s1==s2)
     { countdig(h1);
       countdig(m1);
       countdig(s1);
       countdig(h2);
       countdig(m2);
       countdig(s2);
     }
      else
       {
        while(1)
         {
           
           countdig(h1);
           countdig(m1);
           countdig(s1);
              
          //cout<<" "<<h1<<" "<<m1<<" "<<s1<<endl;      
          if(h1==h2 && m1==m2 && s1==s2)
           break;
              
            s1=s1+1;//increase second count by 1
             
             if(s1==60)
              { s1=0;
                m1=m1+1;
                
                 if(m1==60)
                  { m1=0;
                    h1=h1+1;
                     
                      if(h1==24)
                       h1=0;
                  }
                  
              }
           
           
          }
       }
    
        for(ll i=0;i<10;i++)
         cout<<A[i]<<" ";
    
    return 0;
}


void countdig(ll num)
{
    ll rem,count=0;
    while(num>=1)
     {
       rem=num%10;
        A[rem]++;
        
        num=num/10;
         count++;
         
         
     }
    
      if(count==1)//for 01 02 03 04 05 06 07 08 09
       A[0]++;
        if(count==0)// for 00
         A[0]+=2;

      
}
