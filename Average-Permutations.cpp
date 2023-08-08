#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define vll vector<ll>
#define pb push_back
#define mp make_pair
#define pll pair<ll, ll>
#define pii pair<int, int>
#define vi vector<int>

void solve()
{
    int n;
    cin >> n;
    cout << n - 1 << " ";
    if (n > 4)
    {
        cout << n-2 << " ";
        for(int i = 1; i<n-3;i++)
        {
            cout << i << " ";
        }
        cout << n-3 <<  " ";
    }
    else
        for (int i = 1; i < n - 1; i++)
            cout << i << " ";
    cout << n << endl;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}