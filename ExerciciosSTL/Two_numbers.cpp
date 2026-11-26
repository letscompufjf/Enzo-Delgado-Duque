#include <bits/stdc++.h>
using namespace std;
// int main(){
//     int n1; cin>> n1;
//     vector<int> A(n1);
//     for(int i=0; i<n1; i++){
//         cin>>A[i];
//     }
//     int n2; cin>> n2;
//     vector<int> B(n2);
//     for(int i=0; i<n2; i++){
//         cin>>B[i];
//     }
//     int a,b;
//     bool procuraA, procuraB;
//     // marcador
//     bool resposta = false;
//     for(int i=0; i<n1;i++){
//         a=A[i];
//         for(int j=0;j<n2;j++){
//             b=B[j];
//             auto it1 = find (A.begin(),A.end(), a+b);
//             auto it2 = find(B.begin(), B.end(),a+b);
//             if(it1 == A.end() && it2 == B.end()){
//                 cout<< a << " " << b<<endl;
//                 return 0;
//             }
//         }
//     }
// }
    int main(){
    int n1; cin>> n1;
    vector<int> A(n1);
    for(int i=0; i<n1; i++){
        cin>>A[i];
    }
    int n2; cin>> n2;
    vector<int> B(n2);
    for(int i=0; i<n2; i++){
        cin>>B[i];
    }
    cout<< *max_element(A.begin(),A.end()) <<" "<< *min_element(B.begin(),B.end());
}