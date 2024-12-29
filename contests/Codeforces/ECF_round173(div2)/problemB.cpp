#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        long long int n, d; cin >> n >> d;
        cout <<  "1 ";
        //3 
        if(n>=3 || d%3==0)cout << "3 ";
        //5
        if(d==5)cout << "5 ";
        //7
        if(n>=3 || d%7==0){
            cout << "7 ";
        }
        //9
        if(n>=6 || d%9==0 || (d==3 && n>=2))cout << "9 ";
        cout << "\n";
    }
}