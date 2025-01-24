#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    optimize();
    int t; cin >> t;
    while(t--){
        string s; cin >> s;
        int len = s.size();
        if(len <= 10){
            cout << s << "\n";
        }else{
            cout << s[0] << len-2 << s[len-1] << "\n";
        }
    }
}