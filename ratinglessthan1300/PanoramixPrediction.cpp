#include<bits/stdc++.h>
bool isPrime(int n)
{   if(n==2)
        return true;
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;
    return true;
}
int main()
{
    using namespace std;
    int n, m;
    cin >> n >> m;
    for (int i = n + 1; i <= m;i++)
    {
        if(isPrime(i))
            {
                // cout << i << endl;
                if (i == m)
                    cout << "YES" << endl;
                else
                    cout << "NO" << endl;
                return  0;
            }
        
    }
    cout << "NO" << endl;
    return 0;
}