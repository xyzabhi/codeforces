#include<bits/stdc++.h>
int main(){
    using namespace std;
    int n;
    cin >> n;
    string s;
    cin >> s;
    int arr[26] = {
        0,
    };
    for (int i = 0; i < s.size(); i++)
    {
        arr[int(s[i] - 97)]++;
}
if(n==1)
    {cout << "YES" << endl;
        return 0;
    }
    for (int i = 0; i < 26;i++)
    {
        if(arr[i]>1)
        {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
    return 0;
}