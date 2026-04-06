// just i am trying to break the pattern at ith and i+1 index ..
// so just we haev to chek by taking every two wlwmnts as we have to give output as lowest.
// supose if d is the diff b/w the nos the d/2 opetions needed to MAKE it equal and d/2+1 needed to make ith >i+1 (for unsorted ..)

#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin>>t;
    while(t--){
        int n;cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int opn=INT_MAX;
        for(int i=0;i<n-1 ;i++){// <n-1 because to protect from out of bound 
            if(a[i]<=a[i+1]){
                int diff=a[i+1]-a[i];
                int req_opn= diff/2+1;
                opn=min(opn , req_opn);
            }
            else 
            opn=0;

        }
        cout<<opn<<endl;
    }
}