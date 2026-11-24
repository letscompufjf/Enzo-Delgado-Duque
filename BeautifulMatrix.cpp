#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    vector<vector<int>> mat(5,vector<int>(5));
    int l,c;
    for(int i=0;i<5;i++){
        for(int j=0;j<5;j++){
            cin>>mat[i][j];
            if(mat[i][j] == 1){
                l = i; c = j;
            }
        }
    }
    if(l == 2 && c==2){
        cout<<0<<endl;
    }
    else{
        int ans;
        ans = abs(l-2) + abs(c-2);
        cout<<ans<<endl;
    }
    return 0;
}    