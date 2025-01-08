#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<set<int>> v(n);
    for(int i =0; i<3*n; i++){
        int curr; cin >> curr; curr--;
        v[curr].insert(i);
    }
    vector<vector<int>> mid_v(n, vector<int>(2));
    for(int i= 0; i<n; i++){
        int our_mid;
        int k = 0;
        for(auto u:v[i]){
            if(k==1)our_mid = u;
            k++;
        }
        mid_v[i][0]=our_mid;
        mid_v[i][1]=i;
    }
    sort(mid_v.begin(), mid_v.end());
    for(int i=0; i<n; i++){
        cout << mid_v[i][1] + 1<< " ";
    }
}
