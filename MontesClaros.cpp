#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    if (!(cin >> n)) return 0;

    vector<pair<long long int, long long int>> vetp;
    for(int i = 0; i < n; i++){
        pair<long long int, long long int> p;
        cin >> p.first >> p.second;
        vetp.push_back(p);
    }

    sort(vetp.begin(), vetp.end());

    for(int i = 0; i < n - 1; i++){
        // Se a tonalidade do monte atual for menor ou igual à do seguinte, está errado
        if(vetp[i].second <= vetp[i+1].second){
            cout << "N\n";
            return 0; // Encerra o programa de imediato
        }
    }

    // Se percorreu todo o vetor sem falhar
    cout << "S\n";
    return 0;
}