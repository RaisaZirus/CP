#include <bits/stdc++.h>
using namespace std;
int main() {
    //freopen("input.txt","r", stdin);
    long long int n,m, d;
    cin>>n>>m >> d;
    vector<long long int> A(n), B(m);
    for(int i=0;i<n;i++) cin>>A[i];
    for(int i=0;i<m;i++) cin>>B[i];
    sort(A.begin(), A.end());sort(B.begin(), B.end());
    while(true){
        if(A.size()==0 || B.size()==0){
            cout << -1 << endl;
            break;
        }
        long long int x = A.back();
        long long int y = B.back();
        if(abs(x-y)<=d){
            cout << x+y << endl;
            break;
        }else{
            if(x>y){
                A.pop_back();
            }else{
                B.pop_back();
            }
        }
    }
}