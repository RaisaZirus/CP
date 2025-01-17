#include<bits/stdc++.h>
using namespace std;
int min_cycle=INT_MAX;

void dfs(int curr_node,vector<vector<int>>  &adj_list,vector<int> &visited, set<int>&unvisited, vector<int> &gold){
    visited[curr_node]=1;
    unvisited.erase(curr_node);
    min_cycle = min(min_cycle, gold[curr_node]);
    //process node curr
    for(auto u: adj_list[curr_node]){
        
        if(!visited[u])dfs(u,adj_list,visited,unvisited, gold);
    }
}
int main(){
    //freopen("input.txt","r", stdin);
    int n,m; cin >> n >> m;
    vector<int> gold(n);
    long long int answer = 0;
    for(int i = 0; i < n; i++)cin>>gold[i];
    vector<vector<int>> adj_list(n);
    vector<int> visited(n,0);
    set<int> unvisited;
    for(int i = 0; i < n; i++)unvisited.insert(i);
    for(int i = 0; i< m; i++){
        int x,y; cin >> x >> y;
        adj_list[y-1].push_back(x-1);
        adj_list[x-1].push_back(y-1);
    }
    
    //now to find connected component
    while(!unvisited.empty()){
        int first_el = *(unvisited.begin());
        //cout << first_el;
        dfs(first_el, adj_list, visited, unvisited, gold);
        answer += min_cycle;
        min_cycle = INT_MAX;
    }
    cout << answer << "\n";
}