#include<bits/stdc++.h>
using namespace std;

int main(){
    //freopen("input.txt","r", stdin);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<int> v(n);
        int z = 0;//number of zeroes
        for(int i = 0; i< n; i++){
            cin >> v[i];
            if(v[i]==0)z++;
        }
        if(z==v.size()){
            cout << 0 << "\n";
        }else if(z==0){
            cout << 1 << "\n";
        }else{
            //there's a mix of both
            int chunks = 0; bool first_time_out = false;
            if(v[0]==0)first_time_out=true;
            for(int i = 0; i< n-1; i++){
                if(v[i]!=0 && v[i+1]==0 && first_time_out==false){
                    //first time out of a subsegment
                    first_time_out= true; chunks++;
                }
                else if(v[i]!=0 && first_time_out==true){
                    if((v[i+1]==0 || i==n-2)){
                        chunks++;
                    }
                    
                }
                else if(i==n-2 && v[i]== 0 && v[i+1]!=0)chunks++;

            }
            //cout << chunks << " chunks" << "\n";
            if(chunks == 0 || chunks ==  1)cout << 1 << "\n";
            else cout << 2 << "\n";
        }
        v.clear();
    }
}