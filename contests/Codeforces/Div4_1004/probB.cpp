#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
void solve(){
    int n; cin >> n;
    vector<int> v(n);
    
    for(int i = 0; i<n; i++){
        cin >> v[i];
    }
    if(n==1){cout << "1 1" << "\n"; return ;}
    map<int,int> mp;
    for(int i = 0; i< n; i++)mp[v[i]]++;
    for(int i = 0; i< n; i++)v[i]=mp[v[i]];
    int curr_len = 0;
    int answer1 , answer2;
    int max_len = 0;
    bool has_used = false;
    int i;
    for( i = 0; i< n;i++){
        if(v[i]==1){
            curr_len++;
        }else{
            if(curr_len>max_len){
                max_len = curr_len;
                answer1 = i-curr_len;
                answer2 = i-1;
                has_used = true;
            }
            curr_len=0;
        }
    }
    if(curr_len>max_len){
        max_len = curr_len;
        answer1 = i-curr_len;
        answer2 = i-1;
        has_used = true;
    }

    if(has_used)cout << answer1+1 <<" "<< answer2+1 << "\n";
    else cout << 0 << "\n";
}

int main(){
    //freopen("input.txt", "r", stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t=1; cin >> t;
    while(t--)solve();
}