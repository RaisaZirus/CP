#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
    ll n; 
    cin >> n;
    vector<ll> v(n);
    set<ll> s;
    map<ll,ll> m;
    for(int i = 0; i<n; i++){
        cin>> v[i];
        s.insert(v[i]);
        m[v[i]]++;
    }
    while(!s.empty()){
        ll mn = *s.begin();
        if(m[mn]==1){
            cout << "No" << "\n";
            return;
        }
        m[mn]-=2;
        if(m[mn]>0){
            ll count = m[mn];
            
            
            s.insert(mn+1);
            m[mn+1]+=count;
        }
        m[mn]=0;
        s.erase(mn);
    }
    cout << "Yes" << "\n";
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; 
    cin >> t;
    while(t--)solve();
}