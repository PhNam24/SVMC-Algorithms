#include <bits/stdc++.h>
#define test int t; cin >> t; while (t--)
#define endl '\n'
#define ll long long

using namespace std;

vector<int> ke[1005];
int check[1005] = {};

void dfs ( int u )
{
    check[u] = 1;
    cout << u << " ";
    for ( int i : ke[u] )
    {
        if ( !check[i] )
        {
            dfs(i);
        }
    }
}

int main ()
{
    ios_base::sync_with_stdio(false); 
    cin.tie(NULL); 
    cout.tie(NULL);
    test
    {
        int v, e, u;
        cin >>  v >> e >> u;
        for ( int i = 1; i <= v; i++ )
        {
            ke[i].clear();
            check[i] = 0;
        }
        while(e--)
        {
            int x, y;
            cin >> x >> y;
            ke[x].push_back(y);
            ke[y].push_back(x);
        }
        dfs(u);
        cout << endl;
    }
    return 0;
}