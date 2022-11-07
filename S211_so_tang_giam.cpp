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
    int d = 1;
    test
    {
        string s;
        cin >> s;
        stack<int> st;
        string res;
        for ( int i = 0; i <= s.size(); i++ )
        {
            st.push(i + 1);
            if ( i == s.size() || s[i] == 'I' )
            {
                while(!st.empty())
                {
                    res.push_back(st.top() + '0');
                    st.pop();
                }
            }
        }
        cout << "Test " << d++ << ": " << res;
        cout << endl;
    }
    return 0;
}