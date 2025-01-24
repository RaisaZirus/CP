#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    optimize();
    int n; cin >> n;
    vector<pair<string,string>> v(n);
    for(auto &u: v){
        cin >> u.first >> u.second;
    }
    sort(v.begin(), v.end());
    int index = unique(v.begin(), v.end())-v.begin();
    cout << index << "\n";
}

//https://codeforces.com/contest/44/problem/A