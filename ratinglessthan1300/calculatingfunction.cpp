#include<bits/stdc++.h>
int main()
{
    using namespace std;
    long long int n;
    cin >> n;
   if(n%2==0)
       cout << n / 2;
    else
        cout << -(n / 2) - 1 << endl;
    return 0;
}