#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        string s; 
        vector<int> answer(n+1);
        for(int i = 0; i<n; i++){
            cin >> s;
            int pos = 0; 
            int big_count = 0, small_count = 0;
            for(int j = 0; j<n;j++){
                if(s[j]=='1'){
                if(i<j){
                    big_count++;
                }else if(j<i)small_count++;
                }
            }
            pos = (i-1-small_count)+big_count;//stays the same as predicted 
            answer[n-pos-1]=i+1;
        }
        for(int i = 1; i<= n; i++){
            cout << answer[i] << " ";
        }
        cout << "\n";
        answer.clear();
    }
}