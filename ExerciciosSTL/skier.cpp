#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cin>> n;
    for(int i=0;i<n;i++){
        string rota; cin>>rota;
        set<pair<pair<int,int>,pair<int,int>>> seg_vist;
        int x=0,y=0;
        int ans=0;
        int tempo=0;
        for(char l : rota){
            int x_novo = x;
            int y_novo = y;
            if (l == 'N') y_novo++;      
            else if (l == 'S') y_novo--; 
            else if (l == 'W') x_novo--;
            else if (l == 'E') x_novo++;
            pair<int,int> atual = {x,y};
            pair <int , int> novo = {x_novo,y_novo};

            pair<pair<int,int>, pair<int,int>> segmento = make_pair(min(atual,novo), max(atual,novo));
            if(seg_vist.find(segmento) != seg_vist.end()){
                tempo+=1;
            }
            else{
                tempo+=5;
                seg_vist.insert(segmento);
            }
            x = x_novo;
            y = y_novo;
            
        }
        cout<<tempo<<endl;
    }
    
}