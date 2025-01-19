#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int a, b, c; cin >> a >> b >> c;
        int sum = a+b+c;
        if(sum<=n){
            //most optimal case 
            int rem = n%sum;
            long long int answer = floor(n/sum)*3;
            //cout << rem << " " << answer << endl;
            if(rem>0){
                answer++; //a is taken 
                
                int rem2 = rem-a;
                //cout << rem2 << endl;
                if(rem2>0){
                if(rem2>b){
                    answer+=2;
                }else{
                    answer++;
                }}
            }
            cout << answer<< "\n";
        }else{
            long long int answer = 1;
            int rem = n-a;
            if(rem>0){
                //needs b
                if(rem<=b)answer++;
                else answer+=2;
            }
            cout << answer<< "\n";
        }
    }
}