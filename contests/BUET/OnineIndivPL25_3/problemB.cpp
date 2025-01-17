#include<bits/stdc++.h>
using namespace std;
int main(){
    //freopen("input.txt","r", stdin);
    string a,b; cin >> a>> b;
    //prefix sum-------------------------------------------------------------------------------------
    vector<int> zero_fix(b.size(),0), one_fix(b.size(),0);
    for(int i = 0; i<b.size();i++){
        if(b[i]=='0'){
            zero_fix[i]=1;
        }else zero_fix[i]=0;
    }
    for(int i = 1; i<b.size();i++)zero_fix[i]+=zero_fix[i-1];
    for(int i = 0; i<b.size();i++){
        if(b[i]=='1'){
            one_fix[i]=1;
        }else one_fix[i]=0;
    }
    for(int i = 1; i<b.size();i++)one_fix[i]+=one_fix[i-1];
    //-------------------------------------------------------------------------------------------------
    long long int answer = 0;
    for(int i = 0; i < a.size(); i++){
        if(a[i]=='0'){
            //it needs one fix from i to |b|-|a|+i
            if(i>0){
                answer+=(one_fix[b.size()-a.size()+i]-one_fix[i-1]);
            }else answer+=(one_fix[b.size()-a.size()+i]);
        }else{
            if(i>0){
                answer+=(zero_fix[b.size()-a.size()+i]-zero_fix[i-1]);
            }else answer+=(zero_fix[b.size()-a.size()+i]);
        }
    }
    cout << answer << "\n";
}