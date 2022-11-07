#include <bits/stdc++.h>
#define test int t; cin >> t; while (t--)
#define endl '\n'
#define ll long long

using namespace std;

vector<int> ke[1005];
int check[1005] = {};
int parent[1005] = {};

void bfs ( int u )
{
    queue<int> q;
    q.push(u);
    while(!q.empty())
    {
        int tmp = q.front();
        q.pop();
        check[tmp] = 1;
        for ( int i : ke[tmp] )
        {
            if ( !check[i] )
            {
                q.push(i);
                check[i] = 1;
                parent[i] = tmp;
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
        bfs(start);
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