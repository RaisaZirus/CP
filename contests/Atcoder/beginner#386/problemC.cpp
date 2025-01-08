#include<bits/stdc++.h>
using namespace std;

int main(){
    int k ; cin >> k;
    string S, T;
    cin >> S >> T;
    int s = S.size(), t=T.size();
    if(abs(s-t)>1){
        cout << "No" << "\n";
    }else{
        if(abs(s-t)==1){
            int count = 0;
            int i=0, j=0;
            bool didonce = false;
            while(true){
                if(i==s-1 || j==t-1)break;
                if(S[i]!=T[j]){
                    if(didonce){
                        count = 7;
                        break;
                    }
                    if(s>t){
                        i++; //i stays same
                    }else{
                        j++;    
                    }
                    didonce = true;
                    count++;
                }else{
                    i++; j++;
                }
            }
            if(count<=1)cout << "Yes" << "\n";
            else cout << "No" << "\n";
        }else{
            int count = 0;
            for(int i = 0; i<s; i++)if(S[i]!=T[i])count++;
            if(count<=1)cout << "Yes" << "\n";
            else cout << "No" << "\n";
        }
    }
}