#include<bits/stdc++.h>
int main()
{
using namespace std;
int n;
int t;
cin>>n>>t;
char s[n+1];
for(int i=0;i<n;i++)
cin>>s[i];
for(int i=0;i<t;i++)
{
for(int j=0;j<n-1;j++)
{
if(s[j]=='B' && s[j+1]=='G')
{
swap(s[j],s[j+1]);
j++;
}
}
}
for(int k=0;k<n;k++)
cout<<s[k];
cout<<endl;
return 0;
}
