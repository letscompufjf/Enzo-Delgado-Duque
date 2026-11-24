#include <bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n; cin>>n;
    map<int,int> freq;
    int length;
    for(int i=0;i<n;i++){
        cin>>length;
        freq[length]++;
    }
    int totaldepares=0;
    for(auto const& [length,cont] : freq){
        totaldepares+=cont/2;
    }
    cout<<totaldepares/2<<endl;
}