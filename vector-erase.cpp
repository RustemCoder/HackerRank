#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n,a,d,c;
    cin>>n;

    vector <int> er(n);

    for(int i=0;i<n;i++)
    {
        cin>>er[i];
    }
cin>>a;

er.erase(er.begin()+a-1);



cin>>d>>c;
er.erase(er.begin()+d-1,er.begin()+c-1);
    
cout<<er.size()<<endl;
    for(int i=0;i<er.size();i++)
    {
        cout<<er[i]<<" ";
    }
    return 0;
}