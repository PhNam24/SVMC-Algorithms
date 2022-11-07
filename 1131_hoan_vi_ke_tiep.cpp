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
        int n;
        cin >> n;
        int a[n];
        for ( int &i : a ) cin >> i;
        int idx = n - 2;
        while (idx > 0 && a[idx] > a[idx + 1]) idx--;
        if ( idx == 0 )
        {
            for ( int i = 1; i <= n; i++ )
            {
                cout << i << " ";
            }
        }
        else
        {
            int idx1 = n - 1;
            while (a[idx] > a[idx1]) idx1--;
            swap(a[idx], a[idx1]);
            int l = idx + 1, r = n - 1;
            while (l < r)
            {
                swap(a[l], a[r]);
                l++;
                r--;
            }
            for ( int i : a ) cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}