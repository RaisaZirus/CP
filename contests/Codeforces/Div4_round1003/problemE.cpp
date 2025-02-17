#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n, m; cin >> n >> m;
        
        vector<vector<int>> box(n,vector<int>(m));
        //unordered_map<int, vector<int>> freq;
        vector<pair<long long int,int>> freq;
        
        for(int i = 0; i<n ;i++){
            long long int curr_sum = 0;
            int heheh = n*m;
            for(int j = 0; j<m; j++){
                cin >> box[i][j];
                curr_sum += heheh*box[i][j];
                heheh--;
            }
            pair<long long int , int > p;
            p.first = curr_sum, p.second=i;
            freq.push_back(p);
        }
        sort(freq.begin(), freq.end());
        int hehe = n*m;
        long long int answer = 0;
        for(int i = freq.size()-1; i>=0 ; i--){
            int row = freq[i].second;
            for(int i = 0; i<m; i++){
                answer += (hehe*box[row][i]);
                hehe--;
            }
        }
        cout << answer << "\n";
    }
}