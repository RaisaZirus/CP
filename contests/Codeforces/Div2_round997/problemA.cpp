#include<bits/stdc++.h>
using namespace std;
#define BigM 1000000007
int main(){
    int t; cin >> t;
    while(t--){
        int n,m; cin >> n>>m;
        long long int answer = 0;
        for(int i =0; i<n;i++){
            int x, y; cin >> x >> y;
            if(i==0){
                answer+=4*m;
            }else{
                answer+=(2*(x+y));
            }
        }
        cout << answer << "\n";
    }
}