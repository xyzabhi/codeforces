#include<iostream>
int main()
{
using namespace std;
long n,x;
cin>>n>>x;
long a[n];
for(int i=0;i<n;i++)
cin>>a[i];
long temp=0;
for(long j=0;j<n;j++)
{
temp=temp+a[j];
}
if((temp+(n-1))==x)
cout<<"YES"<<endl;

else
cout<<"NO"<<endl;
return 0;
}