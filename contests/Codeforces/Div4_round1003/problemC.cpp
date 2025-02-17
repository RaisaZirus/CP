#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n, m; cin >> n >> m;
        vector<int> a(n), b(m);
        for(auto &u:a)cin >> u;
        
        //for(auto &u:b)cin >> u;
        //reference array
        cin >> m;

        vector<int> ref(n);
        for(int i = 0 ; i<n;i++)ref[i] = m-ref[i];
        bool is_ok = true;
        for(int i = 0; i<n; i++){
            if(i==0){
                if(a[i]>a[i+1]){
                    a[i]=ref[i];
                }
            }else if(i==n-1){
                
            }else{
                if(a[i]>a[i+1]){
                    if(ref[i]>=a[i-1] && ref[i]<=a[i+1]){
                        a[i]=ref[i];
                    }else{
                        is_ok = false;
                        break;
                    }
                }
            }
        }
    }
}