#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> a(n), b(n);
        for(int i = 0; i< n; i++)cin >> a[i];
        int count = 0; int greed_max = 0; 
        int tolerance_min = INT_MAX;
        for(int i = 0; i< n; i++){
            cin >> b[i];
            if(a[i]<b[i]){
                count++;//counts how many number in a are less than b 
                greed_max = max(greed_max, b[i]-a[i]);
            }else{
                int tol = a[i]-b[i];
                tolerance_min = min(tol, tolerance_min);
            }
        }
        //check whether only 1 is greater or not
        if(count==0){
            cout << "YES" << "\n";
        }else if(count == 1){
            if(tolerance_min>=greed_max)cout << "YES" << "\n";
            else cout << "NO" << "\n";
        }else{
            cout << "NO" << "\n";
        }
        
    }
}