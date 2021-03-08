#include<bits/stdc++.h>
int main()
{
    using namespace std;
    int n;
    cin >> n;
    if(n%2!=0)
        cout << -1 << endl;
    else
        for (int  i = 1; i <= n;i++)
        {
            cout << i + 1<<" ";
            cout << i<<" ";
            i++;
        }
    cout << endl;
    return 0;

}