#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin >> n;
    for(int i=0;i<n;i++){
        int j, k; cin>>j>>k;
        char valorinicial = 'B';
        vector<vector<char>> mat(j,vector<char>(k, valorinicial));
        mat[0][0] = 'W';
        for(int l=0;l<j;l++){
            for(int h=0;h<k;h++){
                cout<<mat[l][h];
            }
            cout<<endl;
        }
    }
}