#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>a(n);
        int opn=0 , poscnt=0 ,negcnt=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==1) poscnt++;
            if(a[i]==-1) negcnt++;
        }
        while(poscnt<negcnt || negcnt%2==1){
            opn++; // means we are converting -1 to 1;
            poscnt++;
            negcnt--;
        }
        cout<<opn<<endl;
    }
}