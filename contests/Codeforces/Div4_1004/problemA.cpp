#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
    int n; cin >> n;
    vector<char> v(n);
    
    for(int i = 0; i<n; i++){
        cin >> v[i];
    }
    int answer = 1;
    for(int i = 1; i<n; i++){
        if(v[i]!=v[i-1])answer++;
    }
    if(v[0]=='0')answer--;
    cout << answer << "\n";
    
}
int main(){
    //freopen("input.txt", "r", stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t=1; cin >> t;
    while(t--)solve();
}