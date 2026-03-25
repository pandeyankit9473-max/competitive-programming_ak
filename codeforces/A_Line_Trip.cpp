#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n, x;
        cin >> n >> x;

        vector<int> a(n);

        for(int i = 0; i < n; i++)
            cin >> a[i];

        int prev = 0;
        int ans = 0;

        for(int i = 0; i < n; i++) {
            ans = max(ans, a[i] - prev);
            prev = a[i];
        }

        ans = max(ans, 2 * (x - a[n-1]));

        cout << ans << endl;
    }
}