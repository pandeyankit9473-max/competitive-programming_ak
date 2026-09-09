#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    int n; cin>>n;
    vector<int>a(n);
    for(auto&it:a) cin>>it;
    int cnt=0;
    for(int i=0;i<n;i++) if(a[i]==0)cnt++;
    int ans=-1;
    if(a[0]==0 && a[n-1]==0) ans=0;
    else if(a[0]==0 && a[n-1]!=0 && cnt>=2) ans=1;
    else if(a[0]!=0 && a[n-1]==0 && cnt>=2) ans=1;
    else if (cnt>=2 && a[0]!=0 && a[n-1]!=0) ans=2;
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