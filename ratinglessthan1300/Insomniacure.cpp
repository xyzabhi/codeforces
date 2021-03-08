#include<bits/stdc++.h>
int main()
{
    using namespace std;
    int k, l, m, n, d;
    cin >> k >> l >> m >> n >> d;
    bool arr[d] = {
        0,
    };
    int a = k;
    int b = l;
    int c = m;
    int z = n;
    while (k <= d)
    {
        arr[k-1] = 1;
        k += a;
    }
     while(l<=d)
    {
        arr[l-1] = 1;
        l += b;
    }
     while(m<=d)
    {
        arr[m-1] = 1;
        m += c;
    }
     while(n<=d)
    {
        arr[n-1] = 1;
        n += z;
    }
    int count = 0;
    for (int i = 0; i < d;i++)
    if(arr[i]==1)
        count++;
    cout << count << endl;
    return 0;
}