#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,total=0; cin>>n;
    vector<int> moedas;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        moedas.push_back(x);
        total+=x;
    }
    sort(moedas.rbegin(), moedas.rend());
    int quant=0, soma=0;
    for(int i : moedas){
        soma+= i;
        quant++;
        if(soma>total-soma){
            break;
        }
    }
    cout<<quant<<endl;
}