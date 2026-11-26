#include <bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    while(getline(cin,s)){
        stack<char> parenteses;
        bool ans = true;
        for(char x : s){
            if(x == '('){
                parenteses.push(x);
            }
            else if(x == ')'){
                if(!parenteses.empty() && parenteses.top()=='(')
                    parenteses.pop();
                else {
                    ans = false;
                    break;
                }
            }
        }
        if(parenteses.empty()&& ans){
            cout<<"correct"<<endl;
        }
        else    
            cout<<"incorrect"<<endl;
    }
}