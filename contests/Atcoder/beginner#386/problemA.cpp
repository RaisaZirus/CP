#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int> s;
    for(int i = 0; i< 4; i++){
        int l; cin >> l;
        s.insert(l);
    }
    if(s.size()==2)cout << "Yes" << "\n";
    else cout << "No" << "\n";
}