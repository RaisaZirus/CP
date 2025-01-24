#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    optimize();
    int n; cin>> n;
    vector<int> heights(n);
    for(auto &u:heights)cin >> u;
    vector<long long int> dp(n,INT64_MAX);
    dp[0] = 0;
    if(n==2){
        cout << abs(heights[1]-heights[0]) << "\n";
        return 0;
    }
    for(int i = 0;i<=n-3;i++){
        dp[i+1]=min(dp[i+1], dp[i]+abs(heights[i]-heights[i+1]));
        dp[i+2]=min(dp[i+2], dp[i]+abs(heights[i]-heights[i+2]));
    }
    //now for the n-2 th thingy
    dp[n-1]=min(dp[n-1], dp[n-2]+abs(heights[n-2]-heights[n-1]));
    cout << dp[n-1] << "\n";
}