#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {

    ll x, y, k;
    cin >> x >> y >> k;

    ll d = y - x;
    ll ans = 0;

    ll i = 0;

    while (i < k && x + i <= d) {
        ans += d % (x + i);
        i++;
    }

    ans += (k - i) * d;

    cout << ans << '\n';
}


int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--) {
        solve();
    }

    return 0;
}