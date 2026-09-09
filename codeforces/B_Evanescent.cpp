#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl '\n'

void solve() {
    string s; int n;
    cin>>n>>s;
    bool subt2=false, subt1=false;
    for(int i=1;i<n-1;i++){
        if(s[i]!=s[i-1] && s[i]!=s[i+1]){ // its the single character ...
            if(s[i-1]==s[i+1]) subt2=true; // left and riht are same so subt 2
            else subt1=true;
        }
    }
    int ans=1;
    for(int i=1;i<n;i++){
        if(s[i]!=s[i-1]) ans++;
    }
    if(subt2) ans-=2;
    else if(subt1) ans-=1;
   

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