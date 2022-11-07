#include <bits/stdc++.h>
#define test int t; cin >> t; while (t--)
#define endl '\n'
#define ll long long

using namespace std;

void sinh ( int n )
{
    queue<string> q;
    q.push("6");
    q.push("8");
    vector<ll> v;
    v.push_back(6);
    v.push_back(8);
    while(1)
    {
        string tmp = q.front();
        if ( tmp.size() == n ) break;
        q.pop();
        v.push_back(stoll(tmp + "6"));
        v.push_back(stoll(tmp + "8"));
        q.push(tmp + "6");
        q.push(tmp + "8");
    }
    cout << v.size() << endl;
    sort(v.begin(), v.end(), greater<ll>());
    for ( ll i : v ) cout << i << " ";
}

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    test
    {
        int n;
        cin >> n;
        sinh(n);
        cout << endl;
    }
    return 0;
}