#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n; cin>> n;
    vector<int> v(n);
    for(int i =0 ; i<n;i++){
        cin>> v[i];
    }
    int menor = v[0] , imenor=0;
    for(int i=1;i<n;i++){
        if(menor > v[i]){
            menor=v[i];
            imenor= i;
        }
    }
    cout<<"Menor valor: "<<menor<<endl;
    cout<<"Posicao: "<<imenor<<endl;
}