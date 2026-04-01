#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,cnt=0;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
        if(a[i]<0)a[i]=-a[i];
    }
    int smallest=*min_element(a.begin(),a.end());
    while(smallest!=0){
      smallest--;
      cnt++;
    }
   
   cout<<cnt<<endl;
}