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
    string s1, s2, tmp;
    getline(cin, s1);
    getline(cin, s2);
    stringstream ss1(s1), ss2(s2);
    set<string> hop, S1, S2;
    while (ss1 >> tmp)
    {
        for ( int i = 0; i < tmp.size(); i++ )
        {
            tmp[i] = tolower(tmp[i]);
        }
        hop.insert(tmp);
        S1.insert(tmp);
    }
    while (ss2 >> tmp)
    {
        for ( int i = 0; i < tmp.size(); i++ )
        {
            tmp[i] = tolower(tmp[i]);
        }
        hop.insert(tmp);
        S2.insert(tmp);
    }
    for ( auto i : hop ) cout << i << " ";
    cout << endl;
    for ( auto i : S1 )
    {
        if ( S2.find(i) != S2.end() ) cout << i << " ";
    }
    return 0;
}