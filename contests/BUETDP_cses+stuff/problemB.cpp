#include<bits/stdc++.h>
using namespace std;
int main(){
    int n , x; cin >> n >> x;
    vector<int> coins(n);
    for(auto &u: coins)cin >> u;
    vector<long long int> dp(x+1,0);
    dp[0]=0;
    for(int i = 1; i<=x;i++){
        int add_that = INT_MAX;
        for(auto u: coins){
            if(i>=u){
                if(dp[i-u]+1<add_that){
                    add_that = dp[i-u]+1;    
                }
            }
        }
        dp[i]=add_that;
    }

    if(dp[x]!=INT_MAX)cout << dp[x];
    else cout << -1 ; 
}