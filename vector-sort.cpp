#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   int n;
   cin>>n;
   vector <int> sor(n) ;

   for(int i=0;i<n;i++)
   {
    cin>>sor[i];
   }

   sort(sor.begin(),sor.end());

   for(int i=0;i<n;i++)
   {
       cout<<sor[i]<<" ";
   }
    return 0;
}
