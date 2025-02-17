#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
    int n,q; cin >> n >> q;
    vector<ll> v(n);
    for(int i = 0; i<n; i++){
        cin >> v[i];
    }
    //counting prefix sum 
    for(int i = 1; i<n; i++)v[i]+=v[i-1];
    while(q--){
        int l,r,k; cin >> l >> r >> k ;
        l--, r--;
        unsigned long long int sum;
        if(l==0 && r==n-1){
            sum = k*n;
        }
        else if(l==0){
            sum = v[n-1]-v[r]+k*(r+1);
        }else if(r==n-1){
            sum = v[l-1]+k*(n-l);
        }
        else{
            sum = v[l-1]+v[n-1]-v[r]+k*(r-l+1);
        }
        
        if(sum%2==1)cout << "Yes" << "\n";
        else cout << "No" << "\n";
    }
}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while(t--)solve();
}
//https://codeforces.com/contest/1807/problem/D