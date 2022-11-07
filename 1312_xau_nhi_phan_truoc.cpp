#include <bits/stdc++.h>
#define test int t; cin >> t; while (t--)
#define endl '\n'
#define ll long long

using namespace std;

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    test
    {
        string s;
        cin >> s;
        int idx = s.size() - 1;
        while(s[idx] == '0') idx--;
        if ( idx == 0 )
        {
            for ( int i = 0; i < s.size(); i++ )
            {
                cout << 1;
            }
        }
        else
        {
            s[idx] = '0';
            for ( int i = idx + 1; i < s.size(); i++ )
            {
                s[i] = '1';
            }
            cout << s;
        }
        cout << endl;
    }
    return 0;
}