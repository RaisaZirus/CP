#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
    ll n, x; cin >> n >>x;
    vector<ll> v(n), t(n);
    map<ll,ll> m;
    for(int i = 0; i<n; i++){
        cin >> v[i];
    }
    //counting prefix sum 
    for(int i = 1; i<n; i++)v[i]+=v[i-1];
    for(int i = 0; i<n; i++)t[i]=v[i]-x;
    ll ans = 0;
    m[v[0]]++;
    //if(v[0]==x)ans++;
    for(int i = 1; i<n; i++){
        long long int to_find_x = t[i];
        if(m.count(to_find_x)){
            ans += m[to_find_x];
        }
        //update the frequency
        m[v[i]]++;
    }
    for(int i = 0; i<n; i++){
        if(t[i]==0)ans++;
    }
    cout << ans << "\n";
}
int main(){
    //freopen("input.txt", "r", stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t=1; 
    while(t--)solve();
}