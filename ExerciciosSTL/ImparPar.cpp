#include <bits/stdc++.h>
using namespace std;
int main(){
    int x;
    vector<int> par;
    vector<int> impar;
    while(cin>>x){
        if(x%2 == 0){
            par.push_back(x);
        }
        else impar.push_back(x);
    }
        sort(par.begin(),par.end());
        sort(impar.begin(),impar.end());
        for(int ans : par){
            cout<<ans<<"\n";
        }
        for(int ans : impar){
            cout<<ans<<"\n";
        }
}