#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end()); // sorting is necessary
        int min=a[0];
        vector<int>c,b;
        for(int i=0;i<n;i++){
            if(a[i]==min)
            b.push_back(a[i]);
            else if(min%a[i]!=0)
            c.push_back(a[i]);
            else
            b.push_back(a[i]);

        }
        if(c.size()<1) cout<<"-1\n";
        else{
            cout<<b.size()<<" "<<c.size()<<endl;
            for(int x:b) cout<<x<<" ";
            cout<<endl;
            for(int x:c)cout<<x<<" ";
            cout<<endl;
        }
    }
}