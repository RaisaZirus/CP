#include<bits/stdc++.h>
using namespace std;
int main(){
    freopen("input.txt","r", stdin);
    int t; cin >> t;
    while(t--){
        int n,k,l ; cin >> n >> k>>l;
        //3 2 5
        //2 5 5
        vector<int> sc_pos(n);
        for(auto &u:sc_pos)cin>>u;
        /*
        if(n==1){
            if(sc_pos[0]==0){
                cout << (l-k)*2 << "\n";    
                continue;
            }
            cout << l*2 << "\n";
            continue;
        }else if(n==2){
            double curr_pos = k;
            double time_gone = sc_pos[0];
            double dis = (sc_pos[1]-k-time_gone);
            time_gone += dis/2;
            curr_pos +=(dis/2 +k);
            time_gone+=(l-curr_pos);
            cout << time_gone*2 << "\n";
            continue;
        }*/

        double curr_pos = k;
        double time_gone = sc_pos[0];
        double dis = (sc_pos[1]-k-time_gone);
        //time_gone += dis/2;
        //curr_pos +=(dis/2 +k);
        bool crow_out = false;
        int i = 0;//on crow 3rd
        while(curr_pos<l){
            if(i<n-1)i++;
            else break;
            dis = sc_pos[i]-curr_pos;
            if(dis<=time_gone){
                //current crow has had enough time to move to crow's current position
                //so crow can jump by k
                curr_pos+=k;
            }else{
                double gap = dis-time_gone;
                //this gap will be covered by both
                time_gone +=(gap/2);//new gone time because of current crow 
                curr_pos += (k+gap/2);
            }
            
        }
        if(curr_pos>=l)cout << time_gone*2 << "\n";
    }
}
//find it tough 
//couldn't solve it 
//https://www.youtube.com/watch?v=mG6uW1FlAKY
//https://codeforces.com/contest/2055/problem/D
//if you ever understand this do solve it 
