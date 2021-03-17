#include<bits/stdc++.h>
int main()
{
    using namespace std;
    string s;
    cin >> s;
    int first_one;
    int flag = 0;
    int countzero = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if(s[i]=='1')
        if(flag==0)
           { first_one = i;
               flag = 1;
           }
               else;
        else{
            if(flag==1)
                countzero++;
        }
    }
    if(countzero>5)
        cout << "yes" << endl;
    else
        cout << "no" << endl;
    return 0;

}