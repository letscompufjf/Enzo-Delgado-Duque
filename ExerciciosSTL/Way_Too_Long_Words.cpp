#include <bits/stdc++.h>
using namespace std;
void solve(){
    string palavra; cin>>palavra;
    if(palavra.size()>10){
        string ans = "";
        ans += palavra[0];
        ans += to_string(((int)palavra.size())-2);
        ans += palavra[palavra.size()-1];
        cout<< ans<<"\n";
        return;
    }
    cout<< palavra<<"\n";
    
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t; cin>>t;

    while(t--){
        solve();
    }
}