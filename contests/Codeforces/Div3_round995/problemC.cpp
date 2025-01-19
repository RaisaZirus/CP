#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n,m,k; cin >> n>>m>>k;
        vector<int> M(m), K(k);
        for(auto &u: M)cin >> u;
        for(auto &u: K)cin >> u;
        //sort(M.begin(),M.end()),sort(K.begin(),K.end());
        if(k<n-1){
            string ans(m,'0');
            cout <<ans<< "\n";
        }else if(k==n){
            string ans(m,'1');
            cout << ans <<  "\n";
        }else{
            //k==n-1
            vector<int> answer(m,0);
            int missing_number = 0;
            for(int i = 0; i<k;i++){
                if(K[i]==i+1){missing_number++;}
            }missing_number++;
            //now parse M
            /*
            string ans(m,'0');
            auto index = lower_bound(M.begin(),M.end(),missing_number);
            int ind;
            if(index!=M.end()){
                //found
                ind = index-M.begin();
                ans[ind]='1';
            }*/
            
            for(int i = 0; i<m;i++){
                if(M[i]==missing_number)answer[i]=1;
            }
            for(int i = 0; i<m;i++)cout << answer[i];
            cout << "\n";
        }
        M.clear(), K.clear();
    }
}