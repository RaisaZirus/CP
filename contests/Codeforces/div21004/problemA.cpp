#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int x, y;
        cin >> x >> y;
        
        
        if((x+1-y)>0 && (x+1-y)%9==0)cout << "Yes" << "\n";
        else if(y == x+1) cout << "Yes" << "\n";
        else cout << "No" << "\n";
    }
}