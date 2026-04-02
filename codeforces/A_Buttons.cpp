#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if(c%2==0){// means even the turn will be of anna 
            if(a>b) cout<<"First"<<endl;
            else
            cout<<"Second"<<endl;
        } 
        else{ // means c is odd the turn will be of kattie
            if(b>a) cout<<"Second"<<endl;
            else 
            cout<<"First"<<endl;

        }
       
    }
     return 0;
}