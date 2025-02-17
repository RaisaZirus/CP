#include<bits/stdc++.h>
using namespace std;
int main(){
    int t; cin >> t;
    while(t--){
        long long int n;
        cin >> n ;
        vector<long long int> v = {0,9,99,999,9999,99999,999999,9999999,99999999,999999999,9999999999};
        long long int p = n;
        bool is_ok = false;
        int answer = INT_MAX;
        bool eight= 0;
        while(p>0){
            int rem = p%10;
            p/=10;
            if(rem==7){is_ok = true;answer = 0;}
            if(rem == 8) eight = true;
            
        }
        if(!is_ok){
            
        for(int i = 1; i<=10; i++){
            long long int k = n;
            for(int j = 1; j<=10; j++){
                k+=v[i];
                int last_dig = k%10;
                long long int power = pow(10,i-1);
                long long int hehe = k;
                hehe = hehe/power;
                int dig = hehe%10;
                hehe/=10;
                int dig2 = hehe%10;
                if(last_dig==7 || dig==7 || dig2==7){answer = min(answer, j);}
            }
        }
        }
        cout << answer << "\n";
    }
}