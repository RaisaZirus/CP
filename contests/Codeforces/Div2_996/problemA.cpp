#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n, a, b ; cin >> n >> a >> b;
        // n has nothing to do with the problem
        int diff = abs(a-b);
        if(diff%2==1){
            cout << "NO" << "\n";
        }else{
            cout << "YES" << "\n";
        }
    }
}