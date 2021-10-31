#include <bits/stdc++.h>
using namespace std;
#define ll long long


int main(){
    ll t,r,g,b;
    vector<ll>v;
    cin>>t;
    while(t--){
        v.clear();
        cin>>r>>g>>b;
        v.push_back(r);
        v.push_back(g);
        v.push_back(b);
        sort(v.begin(),v.end());
        if(v[2]-v[1]-v[0]>1) cout<<"No"<<endl;
        else cout<<"Yes"<<endl;
    }
}