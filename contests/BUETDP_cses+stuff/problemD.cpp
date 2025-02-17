#include<bits/stdc++.h>
using namespace std;
#define BigM 1000000007
int main(){
    int n , x; cin >> n >> x;
    vector<long long int> coins(n);
    for(auto &u: coins)cin >> u;
    sort(coins.begin(), coins.end());
    vector<vector<long long int>> dp(x+1,vector<long long int>(n,0));
    for(int i = 0; i<n; i++)if(coins[i]<=x)dp[coins[i]][i]=1; 
    for(int i = 1; i<=x;i++){
        for(int j = 0;j<n;j++){
            for(int k = n-1; k>=0; k--){
                if(coins[k]<=coins[j] && i>=coins[j])dp[i][j]= (dp[i][j]+dp[i-coins[j]][k])%BigM;
            }
        }
    }
    //cout << dp[5][5]<< " "<< dp[5][3]<< endl;
    long long int answer = 0;
    for(int i = 0; i<n;i++){
        answer=(answer+dp[x][i])%BigM;
        //cout <<dp[9][i] << " ";
    }
    cout << answer << "\n";
}