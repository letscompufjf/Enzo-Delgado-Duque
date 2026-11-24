#include <bits/stdc++.h>
using namespace std;
void solve(){
     int n,k;
        cin>>n>>k;
        set<int> v;
        for(int i=0; i < n ; i++){
            int a; cin>> a;
            v.insert(a);
        }
        if(k<v.size()){
            cout<<-1<<endl;
            return;
        }
        vector<int> block;
        for(int x : v){
            block.push_back(x);
        }
        while(block.size()<k){
            block.push_back(1);
        }
        cout<<n*k<<endl;
        for(int i=0;i<n;i++)
            for(int x : block)
                cout<< x<<" ";
        cout<<endl;
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}