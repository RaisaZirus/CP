#include <bits/stdc++.h>
using namespace std;
int main() {
    //freopen("input.txt","r", stdin);
    long long int n,q;
    cin>>n>>q;
    set<int> gone_list;
    vector<set<int>> adj_list(n);
    while(q--){
        int m; cin >>m;
        if(m==1){
            int x, y; cin >> x >> y;
            x--; y--;
            //add u to the adjlist of v
            adj_list[x].insert(y);
            adj_list[y].insert(x);
            gone_list.insert(x); gone_list.insert(y);
            
        }else{
            int x; cin >> x;
            x--;
            for(auto u: adj_list[x]){
                //those who has x as a link
                adj_list[u].erase(x);
                if(adj_list[u].size()==0){
                    gone_list.erase(u);
                }
            }
            adj_list[x].clear();//that vertex is cleared
            gone_list.erase(x);
            //cout << n-gone_list.size() << "\n";
        }
        cout << n-gone_list.size() << "\n";
    }
}