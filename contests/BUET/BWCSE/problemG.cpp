#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define bigM 1000000007

int main(){
    optimize();
    int t; cin >> t;
    while(t--){
        long long int n, x, y; cin>> n >> x >> y;
        vector<long long int> number(n);
        long long int sum = 0;
        for(auto &u:number){cin >> u;sum+=u;}
        //counting the sum 
        sort(number.begin(), number.end());
        long long int a = sum - x; 
        long long int b = sum - y;

        long long int answer = 0;

        for(int i = 0; i< n ; i++){

            int left = lower_bound(number.begin(), number.end(), b-number[i])-number.begin();
            int right = upper_bound(number.begin(), number.end(), a-number[i])-number.begin();
            answer+=(max(0,right-left));
            if(i<right && i>=left)answer--; // i is in the range 
        }
        answer /= 2;
        cout << answer << "\n";
    }
    
}