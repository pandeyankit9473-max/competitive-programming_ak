#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       int n;
       cin>>n;
       string str;
       cin>>str;
       if(str.find("...")!=-1){
        cout<<2<<endl;
       }
       else{
        int dot=0;
        for(int i=0;i<n;i++){
            if(str[i]=='.')
            dot++;
        }
        cout<<dot<<endl;
       }
    
       

    }
}
