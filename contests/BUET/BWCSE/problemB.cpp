#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    optimize();
    int t; cin >> t;
    for(int i = 1; i<=t;i++){
        int x1,y1,x2,y2; cin >> x1 >> y1 >> x2 >> y2;
        int m; cin >> m ;
        cout << "Case " << i << ":\n";
        while(m--){
            int x, y; cin >> x >> y ;
            if(x1 <x && x<x2 && y>y1 && y<y2)cout << "Yes" << "\n";
            else cout << "No" << "\n";
        }
    }
}