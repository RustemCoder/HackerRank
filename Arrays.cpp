#include <iostream>
#include <vector>
using namespace std;

void reverse(int a[])
{

for(int i=sizeof(a[0])-1;i>=0;i--)
{
cout<<a[i]<<" ";
}


}

int main()
{
    int n;
    cin>>n;
int a[n] ;

for(int i=0;i<n;i++)
{
    cin>>a[i];
}

reverse(a);
return 0;
}