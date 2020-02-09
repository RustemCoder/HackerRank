#include <cmath>
#include <cstdio>
#include <utility>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    int n,b;
    cin>>n;
    string c;
    map <string,int> maps ;
    for(int i=0,y;i<n;i++)
    {
        cin>>b>>c;
      
        
        if(b==1)
        {
           cin>>y;
            maps[c]+=y;
            

        }
        else if(b==2)
        {
           maps.erase(c);
         
        }
          else if(b==3)
           {
               cout<< maps[c]<<endl;
           }
    }
    return 0;
}



