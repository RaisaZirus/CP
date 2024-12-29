#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("input.txt", "r", stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n ; cin >> n;
        vector<int> v(n);
        set<int> answer;
        answer.insert(0);
        for(int i = 0; i<n; i++)cin >> v[i];
        
        //prefix 
        int pref_n = v[0];answer.insert(pref_n);
        for(int i = 1; i < n ; i++){
            pref_n+=v[i];
            answer.insert(pref_n);
        }
        //suffix
        pref_n= v[n-1];answer.insert(pref_n);
        for(int i = n-2;i>=0;i--){
          pref_n+=v[i];answer.insert(pref_n);
        }
        int index ;
        for(int i = 0; i < n ; i++){
            if(v[i]!=-1 && v[i]!=1){index = i;}
        } int num = v[index];
        //mid 
        pref_n=num;answer.insert(pref_n);
        for(int i = index-1; i>=0; i--){
            pref_n+=v[i];answer.insert(pref_n);
            //cout << " " << pref_n << " ";
        }
        pref_n = num;
        for(int i = index+1; i<n; i++){
            pref_n+=v[i];answer.insert(pref_n);
        } 
        cout << answer.size() << endl;
        for(auto u: answer)cout << u << " ";
        cout << endl;
        v.clear();
        answer.clear();
    }   
}