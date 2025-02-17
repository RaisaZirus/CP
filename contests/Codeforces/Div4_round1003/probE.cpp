#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n, m; cin >> n >> m;
        
        vector<vector<int>> box(n,vector<int>(m));
        //unordered_map<int, vector<int>> freq;
        vector<vector<pair<long long int,int>>> freq;
        
        for(int i = 0; i<n ;i++){
            long long int curr_sum = 0;
            long long int tot_sum = 0;
            for(int j = 0; j<m; j++){
                cin >> box[i][j];
                curr_sum += (m-j)*box[i][j];
                tot_sum+=box[i][j];
            }
            
            
            for(int j=0; j<n;j++){
                pair<long long int , int > p;
                p.first = m*(j+1)*tot_sum + curr_sum, p.second=i;
                freq[j].push_back(p); 
            }
        }
        sort(freq.begin(), freq.end());
        int hehe = n*m;
        long long int answer = 0;
        for(int i = freq.size()-1; i>=0 ; i--){
            int row = freq[i][freq[i].size()-1].second;
            for(int i = 0; i<m; i++){
                answer += (hehe*box[row][i]);
                hehe--;
            }
        }
        cout << answer << "\n";
    }
}