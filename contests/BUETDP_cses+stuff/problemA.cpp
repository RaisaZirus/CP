#include<bits/stdc++.h>
using namespace std;
#define bigM 1000000007
int main(){
    int n ; cin >> n;
    vector<int> dp(n+1,0);
    for(int i = 1; i<7 && i<n+1;i++)dp[i]=1;
    //cause only this 6 has the known one way to do stuff

    for(int i = 1; i<=n; i++){
        int first_point;
        if(i>6)first_point=i-6;
        else first_point = 1;
        for(int j = first_point; j<i;j++){
            dp[i]=(dp[j]+dp[i])%bigM;
        }
    }
    cout << dp[n];
}