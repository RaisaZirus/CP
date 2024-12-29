#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
//sums on segments 
ll maxn(ll a, ll b){
    if(a>b)return a;
    else return b;
}
ll minn(ll a, ll b){
    if(a>b)return b;
    else return a;
}
ll  max_subarray(vector<int> &arr){
    ll mx = arr[0];
    ll current_maxsum = mx;
    for(int i =1 ; i < arr.size(); i++){
        current_maxsum = maxn(arr[i], current_maxsum+arr[i]);
        mx = maxn(mx,current_maxsum);
    }
    return mx;
}
int min_subarray(vector<int> &arr){
    ll mx = -1 * arr[0];
    ll current_maxsum = mx;
    for(int i =1 ; i < arr.size(); i++){
        current_maxsum = maxn(-1*arr[i], current_maxsum+ (-1*arr[i]));
        mx = maxn(mx,current_maxsum);
    }
    return -1*mx;
}
int main(){
    //freopen("input.txt", "r", stdin);
    //ios_base::sync_with_stdio(false);
    //cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n ; cin >> n;
        vector<int> v(n); int index = n/2; 
        for(int i = 0; i <n; i++){
            cin >> v[i];
            if(v[i]!=-1 && v[i]!=1)index = i;
        }
        if(index>0 && index<n-1){
        vector<int> left_arr(index), right_arr(n-index-1);
        copy(v.begin(), v.begin()+index, left_arr.begin());
        copy(v.begin()+index+1, v.end(), right_arr.begin());
        //for(auto u: right_arr)cout << u << " ";
        //now apply kadane's algo
        set<int> answer;
        //cout<< min_subarray(left_arr) << endl ;
        int mx1 = max_subarray(left_arr), mx2 = max_subarray(right_arr);
        int mn1 = min_subarray(left_arr), mn2 = min_subarray(right_arr);
        int uplim = max(mx1, mx2);
        for(int i = min(mn1, mn2); i<=uplim;i++)answer.insert(i);
        //now with the extra element
        answer.insert(v[index]);
        int mxp = right_arr[0],mnp = right_arr[0];
        for(int i = 1; i<right_arr.size(); i++){
            right_arr[i]+=right_arr[i-1];
            mxp = max(right_arr[i], mxp);
            mnp = min(right_arr[i], mnp);
        }
        int mxs = left_arr[left_arr.size()-1],mns = left_arr[left_arr.size()-1];
        for(int i = left_arr.size()-2; i>=0; i--){
            left_arr[i]+=left_arr[i+1];
            mxs = max(left_arr[i], mxs);
            mns = min(left_arr[i], mns);
        }
        //cout << mns << endl;
        answer.insert(0);
        uplim = v[index]+ max(max(mxp,mxs),mxp+mxs);
        int min_lim = min(min(mnp,mns),mnp+mns);
        for(int i = min_lim+v[index]; i<= uplim;i++)answer.insert(i);
        cout << answer.size() << "\n";
        for(auto u:answer)cout << u << " ";
        cout << "\n";
        v.clear(); left_arr.clear(); right_arr.clear(); answer.clear();
        }
        else if(index == 0){//-------------------------------------------------------
            //only right array count
        vector<int>  right_arr(n-index-1);
        copy(v.begin()+index+1, v.end(), right_arr.begin());
        //for(auto u: right_arr)cout << u << " ";
        //now apply kadane's algo
        set<int> answer;
        //cout<< min_subarray(left_arr) << endl ;
        int mx2 = max_subarray(right_arr);
        int mn2 = min_subarray(right_arr);
        int uplim = mx2;
        for(int i = mn2; i<=uplim;i++)answer.insert(i);
        //now with the extra element
        answer.insert(v[index]);
        int mxp = right_arr[0],mnp = right_arr[0];
        for(int i = 1; i<right_arr.size(); i++){
            right_arr[i]+=right_arr[i-1];
            mxp = max(right_arr[i], mxp);
            mnp = min(right_arr[i], mnp);
        }
        //cout << mns << endl;
        answer.insert(0);
        uplim = v[index]+mxp;
        int min_lim = mnp;
        for(int i = min_lim+v[index]; i<= uplim;i++)answer.insert(i);
        cout << answer.size() << "\n";
        for(auto u:answer)cout << u << " ";
        cout << "\n";
        v.clear(); right_arr.clear(); answer.clear();
        }
        else if(index==n-1){//-------------------------------------------------------
        vector<int> left_arr(index);
        copy(v.begin(), v.begin()+index, left_arr.begin());
        //for(auto u: right_arr)cout << u << " ";
        //now apply kadane's algo
        set<int> answer;
        //cout<< min_subarray(left_arr) << endl ;
        int mx1 = max_subarray(left_arr);
        int mn1 = min_subarray(left_arr);
        int uplim = mx1;
        for(int i = mn1; i<=uplim;i++)answer.insert(i);
        //now with the extra element
        answer.insert(v[index]);
        
        int mxs = left_arr[left_arr.size()-1],mns = left_arr[left_arr.size()-1];
        for(int i = left_arr.size()-2; i>=0; i--){
            left_arr[i]+=left_arr[i+1];
            mxs = max(left_arr[i], mxs);
            mns = min(left_arr[i], mns);
        }
        //cout << mns << endl;
        answer.insert(0);
        uplim = v[index]+ mxs;
        int min_lim = mns;
        for(int i = min_lim+v[index]; i<= uplim;i++)answer.insert(i);
        
        cout << answer.size() << "\n";
        
        for(auto u:answer)cout << u << " ";
        cout << "\n";
        v.clear(); left_arr.clear(); answer.clear();
            
        }
    }   
}
/*
https://codeforces.com/contest/2043/problem/C
*/