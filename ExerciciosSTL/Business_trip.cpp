#include <bits/stdc++.h>
using namespace std;
int main(){
    int k; cin>> k;
    vector<int> meses(12);
    int cont=0;
    for(int i=0 ; i<12; i++){
        cin>>meses[i];
    }

    sort(meses.begin(),meses.end(),greater<>());

    if(k==0){
        cout<<0<<endl; return 0;
    }
    for(int i=0; i<12 ; i++){
        cont+=meses[i];
        if(cont>=k){
            cout<<i+1<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;

}