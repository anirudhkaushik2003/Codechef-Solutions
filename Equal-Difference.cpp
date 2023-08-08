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
    vi a(n);
    for (int i = 0; i < n; i++)
        cin >> a[i];
    if (n < 3)
    {
        cout << 0 << endl;
        return;
    }
    unordered_map<int, int> m;
    for(auto it: a)
    {
        m[it]++;
    }
    int max_c = 2;
    for(auto it: m)
    {
        max_c = max(max_c, it.second);
    }

    cout << n - max_c << endl;
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