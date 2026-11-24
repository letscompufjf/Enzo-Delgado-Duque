#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin>>s;
    string stack = "";
    int moves = 0 ;
    for(char c : s){
        if(!stack.empty() && stack.back() == c){
            moves++;
            stack.pop_back();
        }
        else{
            stack.push_back(c);
        }
    }
    if(moves%2 == 0){
        cout<<"No"<<endl;
    }
    else cout<<"Yes"<<endl;
}