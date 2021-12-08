#include<bits/stdc++.h>
using namespace std;
int main()
{
    cout<<"Enter the number of processes"<<endl;
    int p;
    cin>>p;
    int burst[p];
    cout<<"Enter the burst time of each process"<<endl;
    for(int i = 0 ; i < p ; i++)
    {
        cin>>burst[i];
    }
    map<int,int> m;
    for(int i = 0 ; i < p ; i++)
    {
        m[i] = burst[i];
    }
   
    int c;
    int x = 0 ;
  map<int, int>::iterator k ;
  map<int, int>::iterator it ;
    while(m.size() > 0)
    {
         int z = INT_MAX;
        
    for( it = m.begin() ; it!=m.end(); it++)
    {
       
        if(z > it->second)
        {
            z = it->second;
            c  = it->first; 
            k = it;
        }

    
      
    }
   
    m.erase(k);
    x = x + z;
     cout<<"The turn around time of process "<<c<<" "<<"is"<<endl;
        cout<<x<<endl;
          cout<<"The waiting time of process "<<c<<" "<<"is"<<endl;
        cout<<x-z<<endl;
        
    }
return 0;
    
}
