#include<bits/stdc++.h>
using namespace std;
bool is_safe(vector<vector<int>> M, int i, int j ){
    if(i>=0 && i<M.size() && j<M[0].size() && j>=0){
        return true;
    }else return false;
}
void dfs (vector<vector<int>> &M, int i , int j, int &answer){
    //now have to process 8 nodes
    vector<int> r_gay = {-1,-1,0,1,1,1,0,-1};
    vector<int> c_gay = {0,1,1,1,0,-1,-1,-1};
    M[i][j] = 0;
    
    for(int p = 0; p<8 ; p++){
        int curr_r = r_gay[p]+i;
        int curr_c = c_gay[p]+j;
        if(is_safe(M, curr_r, curr_c) && M[curr_r][curr_c]==1){
            answer++;
            dfs(M,curr_r, curr_c, answer);
        }
    }
}
int largestRegion(vector<vector<int>> M){
    //traversing the full array 
    int r = M.size();
    int c = M[0].size();
    int answer = 0;
    for(int i = 0; i<r; i++){
        for(int j = 0; j<c; j++){
            if(M[i][j]==1){
                //dfs
                int curr_answer = 1;
                dfs(M,i,j, curr_answer);//pass by reference
                answer = max(answer, curr_answer);
            }
        }
    }
    return answer;
}
int main(){
    vector<vector<int>> M = {{1, 0, 0, 0, 1, 0, 0},
                             {0, 1, 0, 0, 1, 1, 1},
                             {1, 1, 0, 0, 0, 0, 0},
                             {1, 0, 0, 1, 1, 0, 0},
                             {1, 0, 0, 1, 0, 1, 1}};

    cout << largestRegion(M);

    return 0;
}