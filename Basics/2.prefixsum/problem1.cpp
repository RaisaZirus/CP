#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main(){
    int n,q; cin >> n >> q;
    vector<ll> v(n);
    for(int i = 0; i<n; i++){
        cin >> v[i];
    }
    //counting prefix sum 

    for(int i = 1; i<n; i++)v[i]+=v[i-1];

    while(q--){
        int l ,r ;
        cin >> l >> r;
        l--, r--;
        if(l==0){
            cout << v[r]<< "\n"; 
            continue;
        }
        cout << v[r]-v[l-1] << "\n";
    }
}

//https://cses.fi/problemset/task/1646