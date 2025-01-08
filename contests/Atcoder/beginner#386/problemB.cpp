#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int answer = 0;
    for(int i = 0; i< s.size();){
        if(s[i]=='0' && i!=(s.size()-1) && s[i+1]=='0'){
            i+=2;
            answer++;
        }else{
            answer++;
            i++;
        }
    }
    cout << answer << "\n"; 
}