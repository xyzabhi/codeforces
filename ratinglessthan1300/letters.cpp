#include<bits/stdc++.h>
int main()
{
    using namespace std;
    int n, m;
    cin >> n >> m;
    int imin = INT_MAX;
    int imax = INT_MIN;
    int jmin = INT_MAX;
    int jmax = INT_MIN;
    char graph[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m;j++)
        {
            cin >> graph[i][j];
            if(graph[i][j]=='*')
            {
                if(i<imin)
                    imin = i;
                if(i>imax)
                    imax = i;
                if(j<jmin)
                    jmin = j;
                if(j>jmax)
                    jmax = j;
            }
        }
    }
    // cout << imin << " " << imax << " " << jmin << " " << jmax << endl;

    for (int i = imin; i <= imax; i++)
    {
        for (int j = jmin; j <= jmax;j++)
            cout << graph[i][j];
        cout << endl;
    }
    return 0;
}