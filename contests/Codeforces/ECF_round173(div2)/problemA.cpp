#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        //normally problem A is a simulation problem like always 
        //from next time think about simulation all the time 
        long long int n; cin >> n; 
        long long int k = 1;
        while(n>3){
            k*=2;
            n/=4;
        }
        cout << k << endl; 
    }
}