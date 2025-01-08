#include<bits/stdc++.h>
using namespace std;

int main(){
    //freopen("input.txt","r", stdin);
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        vector<char> v(n);
        int p = 0, s = 0, dot = 0;//number of zeroes
        for(int i = 0; i< n; i++){
            cin >> v[i];
            if(v[i]=='p')p++;
            if(v[i]=='s')s++;
            if(v[i]=='.')dot++;
        }int len = v.size();
        if(p==len || s == len || dot==len)cout << "YES" << "\n";
        else if(s==0 || p == 0)cout << "YES" << "\n";
        else{
            
            
                if((p==1 && v[n-1]=='p')||(s==1 && v[0]=='s')){
                    cout << "YES" << "\n";
                }else{
                    cout << "NO" << "\n";
                }
        }
        v.clear();
    }
}