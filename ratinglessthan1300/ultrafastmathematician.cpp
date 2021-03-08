#include<bits/stdc++.h>
int main(){
    using namespace std;
    string s1;
    string s2;
    cin >> s1;
    cin >> s2;
    for (int i = 0; i <s1.size();i++)
    if(s1[i]==s2[i])
        cout << 0;
    else
        cout << 1;

    cout << endl;
    return 0;

}