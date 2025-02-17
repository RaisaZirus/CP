#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
    int n; cin >> n ;
    vector<ll> v(n), t(n);
    for(int i = 0; i<n; i++){
        cin >> v[i];
        t[i]=v[i];
    }
    //counting prefix sum 
    for(int i = 1; i<n; i++)t[i]+=t[i-1];
    int m; cin >> m;
    sort(v.begin(), v.end());
    for(int i = 1; i<n; i++)v[i]+=v[i-1];
    while(m--){
        int a; cin >> a;
        int r , l; cin >> l >> r;
        r--, l--;
        if(a==2){
            if(l!=0)cout << v[r]-v[l-1] << "\n";
            else cout << v[r] << "\n";
        }else{
            if(l!=0) cout << t[r]-t[l-1] << "\n";
            else cout << t[r] << "\n";
        }
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t=1; 
    while(t--)solve();
}