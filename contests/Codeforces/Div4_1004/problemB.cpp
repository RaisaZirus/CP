#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
    int n; cin >> n;
    vector<int> v(n);
    
    for(int i = 0; i<n; i++){
        cin >> v[i];
    }
    //trying to find the unique_element prefix
    set<int> s; set<int> s2;
    vector<int> pref(n,0);
    vector<int> pref_rev(n,0);
    pref[0]=1; pref_rev[n-1]=1;
    s.insert(v[0]); s2.insert(v[n-1]);
    int prev_size = s.size(); int prev_size_2 = s.size();
    for(int i = 1; i<n; i++){
        s.insert(v[i]);
        pref[i]=s.size();
    }
    for(int i = n-2; i>=0; i--){
        s2.insert(v[i]);
        pref_rev[i]=s2.size();
    }
    //prefix unique count done 
    int max_score = n-s.size();
    int r , l;
    bool moves_done = false;
    int prev_len = n;
    for(int i = 0; i<n-1; i++){
        for(int j = i+1; j<n; j++){
            //if i==0 need different something 
            int curr_score;
            int curr_unique = 0;
            if(i==0 && j==n-1) curr_unique = 0;
            else if(i==0) curr_unique = pref_rev[j+1];
            else if(j==n-1) curr_unique = pref[i-1];
            else curr_unique = pref[i-1]+pref[j+1];

            if(i!=0)curr_score = n-(j-i+1)-curr_unique;
            else curr_score = n-(j+1)-curr_unique;
            int curr_len = n-(j-i+1);

            if(curr_score>=max_score && curr_len<prev_len){
               l = i, r = j;  
               prev_len = curr_len;
               max_score = curr_score;
               moves_done = true;
               cout << "prevlen " << prev_len << " currlen "<< curr_len ;
               cout << "prevscore " << max_score << " currlen "<< curr_score << "\n";
            }
        }
    }
    if(moves_done)cout << l+1 <<" " << r+1 << "\n";
    else cout << 0 << "\n";

    
}
int main(){
    //freopen("input.txt", "r", stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t=1; cin >> t;
    while(t--)solve();
}