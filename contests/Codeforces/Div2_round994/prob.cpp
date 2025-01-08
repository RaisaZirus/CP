#include<bits/stdc++.h>
using namespace std;

int main(){
    //freopen("input.txt","r", stdin);
    int t; cin >> t;
    while(t--){
       int n,x,y; cin >> n >> x >> y;
       vector<int> v(n);
       for(int i = 0; i<n; i++){
            if(i%2==0)v[i]=1;
            else v[i]=0;
       }
       if(n%2==1)v[0]++;
       x--; y--;
       vector<int> freq(3,0);
        int new_x, new_y;
       //for x
       if(x-1<0){
        freq[v[(x-1+n)%n]]=1; 
       }else freq[v[(x-1)%n]]=1;
       if(x+1>n-1){
        freq[v[(x+1)%n]]=1; 
       }else freq[v[(x+1)%n]]=1;
        freq[v[y]]=1;
       
       for(int i = 0; i<3; i++){
            if(freq[i]==0){
                new_x = i; break;
            }
       }
       v[x] = new_x;
       for(int i = 0; i<3; i++)freq[i]=0;
       if(y-1<0){
        freq[v[(y-1+n)%n]]=1; 
       }else freq[v[(y-1)%n]]=1;
       if(y+1>n-1){
        freq[v[(y+1)%n]]=1; 
       }else freq[v[(y+1)%n]]=1;
        freq[v[x]]=1;
       
       for(int i = 0; i<3; i++){
            if(freq[i]==0){
                new_y = i; break;
            }
       }
        v[y]= new_y;
       //cout << new_x << "\n";
       for(auto u:v)cout << u << " ";
       cout << "\n";
        v.clear(); freq.clear();
    }
}