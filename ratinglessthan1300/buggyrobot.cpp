#include<bits/stdc++.h>
int main()
{
    using namespace std;
    int n;
    cin >> n;
    string s;
    cin >> s;
    int dx = 0;
    int dy = 0;
    for (int i = 0; i < n; i++) {
             if (s[i] == 'U')
                 dy++;
             if (s[i] == 'D')
                 dy--;
             if (s[i] == 'R')
                 dx++;
             if (s[i] == 'L')
                 dx--;
         }
         cout << n-(abs(dx) + abs(dy)) << endl;
         return 0;
}