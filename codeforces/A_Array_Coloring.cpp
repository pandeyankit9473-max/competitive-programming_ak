#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n; cin>>n;
       vector<int> a(n);
       int oddcnt=0;
       for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]%2!=0) oddcnt++;
       }
       if(oddcnt%2==0)
       cout<<"YES\n";
       else
       cout<<"NO\n";
    }
}
// if the count of odd is even then we can eaily make a pairs of two even hence simply 
// we just need to check that 