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
    int n; cin>> n;
    vector<ll> v;
    ll soma_ant =-INF;
    ll ans = -INF;
    for(int i=0;i<n;i++){
        int x; cin>>x;
        v.pb(x);
    }
    for(int i=0;i<n;i++){
        if(soma_ant <0){
            soma_ant = v[i];
        }
        else{
            soma_ant+=v[i];
        }
        ans=max(soma_ant,ans);
    }
    cout<< ans<<endl;
    return(0);
}