#include <bits/stdc++.h>
#define test int t; cin >> t; while (t--)
#define endl '\n'
#define ll long long

using namespace std;

vector<int> ke[1005];
int check[1005] = {};

void bfs ( int u )
{
    queue<int> q;
    q.push(u);
    while(!q.empty())
    {
        int tmp = q.front();
        q.pop();
        cout << tmp << " ";
        check[tmp] = 1;
        for ( int i : ke[tmp] ) 
        {
            if ( !check[i] )
            {
                q.push(i);
                check[i] = 1;
            }
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
        bfs(u);
        cout << endl;
    }
    return 0;
}