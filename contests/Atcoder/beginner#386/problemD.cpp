#include<bits/stdc++.h>
using namespace std;

int main(){
    //freopen("input.txt", "r", stdin);
    long long int n, t;
    cin >> n >> t;
    vector<vector<int>> v;
    int min_y = INT_MAX;
    for(int i = 0; i< t; i++){
        vector<int> h(3); char c;
        cin >> h[0] >> h[1] >> c;
        h[2] = (int)c;
        v.push_back(h);
    }
    sort(v.begin(), v.end());
    bool ok = true;
    for(auto u:v){
        //cout << u[0] << u[1] << u[2] << "\n";
        if(u[2]==((int)('W'))){
            min_y = min(min_y, u[1]);
        }else{
            if(u[1]>=min_y)ok = false;
        }
    }
    if(ok)cout << "Yes" << "\n";
    else cout << "No" << "\n";
}


/*
this approach does work for shorter test case, but why compute such a 
large array bro?

long long int n, t;
    cin >> n >> t;
    vector<long long int> B_maxy(n,0), W_maxy(n,0);
    while(t--){
        long long int y, x;
        cin >>y >> x;
        x--;
        char c; cin >> c;
        if(c=='B'){
            B_maxy[x]=max(y, B_maxy[x]);
        }else if(c=='W'){
            W_maxy[x]=max(W_maxy[x],n-y+1);
        }
    }
    
    for(auto u:B_maxy)cout << u << " ";
    cout << endl;
    for(auto u:W_maxy)cout << u << " ";
    cout << endl;
    
    long long int curr_max=0;
    for(long long int i= n-1; i>=0; i--){
        curr_max = max(curr_max, B_maxy[i]);
        B_maxy[i]=curr_max;
        
    }
    
    curr_max = 0;
    for(long long int i= 0; i<n; i++){
        curr_max = max(curr_max, W_maxy[i]);
        W_maxy[i]=curr_max;
    }

    //now we have to see that if they collide or not
    bool ok = true;
    for(long long int i = 0; i<n; i++){
        if(B_maxy[i]+W_maxy[i]>n)ok= false;
    }
    if(ok)cout << "Yes" << "\n";
    else cout << "No" << "\n";

*/