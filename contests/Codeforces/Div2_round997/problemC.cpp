#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        if(n>=8){
            for(int i = 1; i<=(n/2);i++)cout << i << " ";
            for(int i = 1; i<=(n/2);i++)cout << i << " ";
            if(n%2==1){
                cout << (n/2)+1;
            }
            cout << "\n";
        }else{
            if(n==6)cout << "1 1 2 3 1 2" ;
            if(n==7)cout << "1 2 3 4 1 2 3" ;
            cout << "\n";
        }
    }
}