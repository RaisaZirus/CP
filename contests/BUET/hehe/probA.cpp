#include<bits/stdc++.h>
using namespace std;

int main(){
    //freopen("input.txt","r", stdin);
    int t; cin >> t;
    vector<long long int> time(100);
    time[0]=0;
    for(int i= 1; i<=6; i++)time[i]=15;
    time[7]=20; time[8]=20;
    time[9]=25; time[10]=25;
    for(int i = 11; i<100;i++){
        time[i] = min(time[i-10]+25, time[i-8]+20);
        time[i] = min(time[i], time[i-6]+15);
    }
    while(t--){
        long long int n; cin >> n;
        //cout << time[n] << endl;
        if(n<100){
            cout << time[n] << endl;
        }else{
            int remainder = n%10;
        remainder+=10;
        n-=remainder;
        n/=10;
        n*=25;
        cout << n+ time[remainder] << "\n";
        }
    }
    //learnt today
    //don't get nervous or competetive at any contest, it blocks your view
    
}