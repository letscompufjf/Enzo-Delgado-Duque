#include <bits/stdc++.h>
using namespace std;
// int main(){
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);
//     long long n;
//     cin>>n;
//     set<long long> ans;
//     for(long long i=0;i<n;i++){
//         long long x; cin>> x;
//         ans.insert(x);
//     }
//     cout<< ans.size()<<endl;
// }
int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    long long n; cin>>n;
    vector<long long> ans;
    for(long long i=0;i<n;i++){
        long long x; cin>>x;
        ans.push_back(x);
    }
    sort(ans.begin(),ans.end());
    int cont = 1;
    long long pont = ans[0];
    for(long long i=1;i<n;i++){
        if(pont != ans[i]){
            pont = ans[i];
            cont++;
        }
    }
    cout<<cont<<endl;
}