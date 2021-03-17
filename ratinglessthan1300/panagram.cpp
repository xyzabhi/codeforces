#include<bits/stdc++.h>

int main()
{
    using namespace std;
    int arr[26]={0,};
    int n;
    cin >> n;
    string s;
    cin >> s;
    std::for_each(s.begin(), s.end(), [](char & s){
    s = ::tolower(s);
});

    for (int i = 0; i < s.size(); i++)
    {
        arr[int(s[i]) - 97]++;
    }
    for (int i = 0; i < 26;i++)
    {
        if(arr[i]>0)
            ;
            else
            {
                cout << "NO" << endl;
                return 0;
            }
    }
    cout << "YES" << endl;
    return 0;

}