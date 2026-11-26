#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n; cin>>n;
    for(int t=0;t<n;t++){
        int tam; cin>>tam;
        vector<int> v(tam);
        for(int i=0;i<tam;i++){
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int left = 0;
        int right = tam-1;
        vector<int>ans(tam);
        int cont=tam-1;
        while(left<=right){
            if (left == right) {
                ans[cont] = v[left];
                left++;
            } 
            else {
                ans[cont] = v[left];
                cont--;
                ans[cont] = v[right];
                cont--;
                left++;
                right--;
            }        
        }
        for(int i = 0 ; i<tam; i++){
            cout<<ans[i]<< (i==tam-1 ?"" : " ");
        }
        cout<<endl;
    }
}