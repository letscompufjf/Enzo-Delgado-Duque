#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>>n;
    string nome;
    for(int i = 0; i < n ; i++){
        cin>> nome;
        bool resposta = true;
        for(int j=0;j<nome.size()-1;j++){
            if(tolower(nome[j])>=tolower(nome[j+1])){
                resposta = false;
                break;
            }
        }
        if(resposta){
            cout<<nome<<": O"<<endl;
        }
        else{
            cout<<nome<<": N"<<endl;
        }
    }
    return 0;
}