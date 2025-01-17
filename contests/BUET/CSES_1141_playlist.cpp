#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    //sliding window problem
    int n; cin >> n;
    vector<int> lala(n);
    for(int i = 0; i<n; i++){
        cin >> lala[i];
    }
    int s = 0, e = 0;
    int answer = 0;//set to 0 at first 
    multiset<int> ms;
    for(; s <n; s++){
        if(ms.count(lala[s])){
            ms.erase(ms.find(lala[s]));
        }
        answer = max(answer , e -s +1);
    }
}