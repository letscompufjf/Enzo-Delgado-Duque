#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>> n;
    string nome; cin>> nome;
    int conto=0, contz=0, contn=0, conte=0;
    
    for(int i = 0 ; i < n; i++ ){
        if(nome[i]=='o'){
            conto++;
        }
        if(nome[i]=='n'){
            contn++;
        }
        if(nome[i]=='e'){
            conte++;
        }
        if(nome[i]=='z'){
            contz++;
        }
    }
    int resposta1=contn; 
    for(int i=0;i<resposta1;i++){
        cout<<"1"<<" ";
    }
    int resposta2=contz;
    for(int i=0;i<resposta2;i++)
    {
        cout<<"0 ";
    }
    cout<<endl;

}