#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n), b(n);
        for(auto &u:a)cin>> u;
        for(auto &u:b)cin>> u;
        long long int answer = 0;
        for(int i = 0; i<n-1;i++){
            if(b[i+1]<a[i])answer+=(a[i]-b[i+1]);
        }
        answer+=a[n-1];
        cout << answer << "\n";
    }
}