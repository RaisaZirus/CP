#include<bits/stdc++.h>
using namespace std;

int main(){
    unsigned long long int answer = 0;
    unsigned long long int curr;
    for(int i = 0; i <=63; i++){
        cin >> curr;
        answer += (curr<<i);
    }
    cout << answer;
}
//you made the first mistake of not understanding the problem statement's difficulty
//and made the right decision by going through the editorial cause you were spiralling a lot 
//and never use pow function for powers of 2, you'll regret it
//instead use the left shift operation
