#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    for(int i=0; i<n;i++){
        string a,b,c;
        cin>>a>>b>>c;
        int tamanho = a.size();
        bool resposta = true;
        for(int j=0;j<tamanho;j++){
            if(a[j]!=c[j] && c[j]!=b[j]){
                resposta = false;
                break;
            }
        }
        if(resposta){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}