#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
    int n; cin >> n;
    vector<ll> v(n), pref1(n), pref2(n);
    
    for(int i = 0; i<n; i++){
        cin >> v[i];
        pref1[i]=v[i], pref2[i]=v[i];
    }
    ll answer = 0;
    for(int i = 0; i<n; i++){
        if(v[i]>0)answer+=v[i];
        pref1[i]=answer;
    }answer = 0;
    for(int i = n-1; i>=0; i--){
        if(v[i]<0)answer+=fabs(v[i]);
        pref2[i]=answer;
    }
    ll max_number = max(pref1[n-1], pref2[0]);
    for(int i = 0; i<n-1; i++){
        ll curr_answer = pref1[i]+pref2[i+1];
        max_number = max(curr_answer, max_number);
    }
    cout << max_number << "\n";

}
int main(){
    //freopen("input.txt", "r", stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t; cin >> t;
    while(t--)solve();
}