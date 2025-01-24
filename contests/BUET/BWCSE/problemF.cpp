#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define bigM 1000000007

int main(){
    optimize();
    int n; cin>> n;
    vector<long long int> number(n), num2(n);
    for(auto &u:number)cin >> u;
    //couting the suffix sum 
    num2 = number;
    for(int i = n-2; i>=0;i--)num2[i]= (num2[i]+num2[i+1])%bigM;
    //for(auto u: num2)cout << u << " ";
    long long int answer = 0;
    for(int i = 0; i<=n-2;i++){
        answer = (answer+ (number[i]*num2[i+1])%bigM)%bigM;
    }
    cout << answer << "\n";
}