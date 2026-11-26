#include <bits/stdc++.h>

using namespace std;

#define _ ios_base::sync_with_stdio(0); cin.tie(0);
#define endl '\n'
#define f first
#define s second
#define pb push_back

typedef long long ll;
typedef pair<int, int> ii;

const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3fll;

int main()
{ _
    int n;
    cin>>n;
    map<string,int> banco;
    while(n--){
        string s;
        cin>>s;
        if(banco.count(s)){
            banco[s]++;
            s +=to_string(banco[s]);
            cout<<s<<endl;
        }
        else{
            banco[s];
            cout<<"OK"<<endl;
        }
    }
    return(0);
}