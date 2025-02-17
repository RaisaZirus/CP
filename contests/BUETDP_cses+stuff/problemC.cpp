#include<bits/stdc++.h>
using namespace std;
#define BigM 1000000007
int main(){
    int n , x; cin >> n >> x;
    vector<int> coins(n);
    for(auto &u: coins)cin >> u;
    vector<long long int> dp(x+1,0);
    for(auto u:coins){if(u<=x)dp[u]=1;}
    dp[0]=0;
    for(int i = 1; i<=x;i++){
        for(auto u:coins){
            if(i>=u)dp[i]=(dp[i]+dp[i-u])%BigM;
        }
    }
    cout << dp[x] << "\n";
}
/*
summary: 
suppose ways to reach money x is dp[x]
the recurrence relation is dp[x-coin1]+dp[x-coin2]+dp[x-coin3]....... = dp[x]
gets you the ways to reach x
*/