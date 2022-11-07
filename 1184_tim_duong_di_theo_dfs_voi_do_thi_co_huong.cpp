#include <bits/stdc++.h>
#define test int t; cin >> t; while (t--)
#define endl '\n'
#define ll long long

using namespace std;

vector<int> ke[1005];
int check[1005] = {};
int parent[1005] = {};

void dfs ( int u)
{
    check[u] = 1;
    for ( int i : ke[u] )
    {
        if ( check[i] == 0 )
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
        int v, e;
        cin >> v >> e;
        int start, end;
        cin >> start >> end;
        for ( int i = 1; i <= v; i++ )
        {
            ke[i].clear();
            check[i] = 0;
            parent[i] = 0;
        }
        while(e--)
        {
            int x, y;
            cin >> x >> y;
            ke[x].push_back(y);
        }
        dfs(start);
        if (check[end] == 0 ) cout << -1;
        else 
        {
            stack<int> st;
            while(end != start)
            {
                st.push(end);
                end = parent[end];
            }
            st.push(start);
            while ( st.size() > 1 )
            {
                cout << st.top() << " ";
                st.pop();
            } 
            cout << st.top();
        }
        cout << endl;
    }
    return 0;
}