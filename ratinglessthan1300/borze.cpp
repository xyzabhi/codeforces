#include<bits/stdc++.h>
int main()
{
    using namespace std;
    string s;
    cin >> s;
    for (int i = 0; i < s.size();i++)
    {
        if(s[i]=='.')
            cout << 0;
        else if(s[i]=='-')
            {
                if(s[i+1]=='-')
                    cout << 2;
                else
                    cout << 1;
                i++;
            }
    }
    cout << endl;
    return 0;
}