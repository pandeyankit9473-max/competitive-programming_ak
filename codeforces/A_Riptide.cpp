#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
   int a,b,c; cin>>a>>b>>c;
   int ans=min(abs(a-b),min(abs(b-c), abs(c-a)));
   cout<<ans<<endl;

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