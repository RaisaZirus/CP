#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    optimize();
    int S, X; cin >> S >> X;
    int answer = 0;
    while(S>0){
        S/=X;
        answer++;
    }
    cout << answer << "\n";
}