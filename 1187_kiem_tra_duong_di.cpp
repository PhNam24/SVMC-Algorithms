#include <bits/stdc++.h>
#define test int t; cin >> t; while (t--)
#define endl '\n'
#define ll long long

using namespace std;

vector<int> ke[1005];
int check[1005] = {};
int parent[1005] = {};

void dfs ( int u )
{
    check[u] = 1;
    for ( int i : ke[u] )
    {
        if ( !check[i] )
        {
            parent[i] = u;
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
        int n, m;
        cin >> n >> m;
        for ( int i = 1; i <= n; i++ )
        {
            ke[i].clear();
            check[i] = 0;
            parent[i] = 0;
        }
        while(m--)
        {
            int x, y;
            cin >> x >> y;
            ke[x].push_back(y);
            ke[y].push_back(x);
        }
        int q;
        cin >> q;
        while(q--)
        {
            int start, end;
            cin >> start >> end;
            dfs(start);
            if ( check[end] == 0 ) cout << "NO";
            else cout << "YES";
            for ( int i = 1; i <= n; i++ )
            {
                check[i] = 0;
                parent[i] = 0;
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}