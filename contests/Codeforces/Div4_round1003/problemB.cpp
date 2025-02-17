#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int n = s.size();
        bool is_one = false;
        
        for(int i = 0; i<n-1; i++){
            if(s[i]==s[i+1]){is_one = true; break;}
        }
        if(is_one)cout << 1 << "\n";
        else cout << n << "\n";
    }
}