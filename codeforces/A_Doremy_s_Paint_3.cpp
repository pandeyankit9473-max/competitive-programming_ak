#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        unordered_map<int ,int>freq;
        for(int i=0;i<n;i++){
            cin>>a[i];
          freq[a[i]]++;
        }
        if(freq.size()>2){
        cout<<"NO"<<endl;
        }
        else if(freq.size()==1){
       cout<<"YES"<<endl;
        }
        else{
        auto it =freq.begin();
        int f1=it->second;
        it++;
        int f2=it->second;
        if(abs(f1-f2)<=1){
          cout<<"YES"<<endl;  
        }
        else
        cout<<"NO"<<endl;
        }
    }
}