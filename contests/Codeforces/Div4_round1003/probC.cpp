#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n, m; cin >> n >> m;
        vector<int> a(n), b(m);
        for(auto &u:a)cin >> u;
        
        //for(auto &u:b)cin >> u;
        cin >> m;
        bool is_ok = true;
        a[0]=min(a[0], m-a[0]);
        if(a[1]<a[0])is_ok = false;
        for(int i = 1; i< n; i++){
            if(m-a[i]<a[i] && m-a[i]>=a[i-1]){
                a[i] = m-a[i];
            }
            if(a[i-1]>a[i])is_ok = false;
        }
        if(is_ok)cout << "Yes" << "\n";
        else cout << "No" << "\n";
    }
}