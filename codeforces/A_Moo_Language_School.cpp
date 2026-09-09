#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n, k; cin>>n>>k;
    string s; cin>>s;
    int ans=0;
    for(int i=0;i<n;i+=k){
          int zero=0;
        for(int j=i;j<i+k;j++){
            if(s[j]=='0'){ zero =1; }
        }
        if(zero==0) ans++;
    }
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