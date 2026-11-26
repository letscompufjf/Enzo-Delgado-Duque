#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>> n;
    string seq_proibida, bracelete;
    bool resposta = false;
    for(int i=0; i<n; i++){
        cin>> seq_proibida >> bracelete;
        bracelete = bracelete + bracelete;
        string inv_bracelete =  bracelete;
        reverse(inv_bracelete.begin(),inv_bracelete.end());
        int res1, res2;
        res1 = bracelete.find(seq_proibida);
        res2 = inv_bracelete.find(seq_proibida);
        if(res1!= string :: npos || res2 != string :: npos){
            cout<<"S"<<endl;
        }
        else{
            cout<<"N"<<endl;
        }
    }
}
