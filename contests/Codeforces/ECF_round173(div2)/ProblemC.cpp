#include<bits/stdc++.h>
using namespace std;
//sums on segments 
int main(){
    //freopen("input.txt", "r", stdin);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t; cin >> t;
    while(t--){
        int n ; cin >> n;
        vector<int> v(n); int index; 
        for(int i = 0; i <n; i++){
            cin >> v[i];
            if(v[i]!=-1 && v[i]!=1)index = i;
        }
        vector<int> left_arr(index), right_arr(n-index-1);
        copy(v.begin(), v.begin()+index, left_arr.begin());
        copy(v.begin()+index+1, v.end(), right_arr.begin());
        for(auto u: right_arr)cout << u << " ";
        v.clear(); left_arr.clear(); right_arr.clear();
    }   
}
/*
5
5
1 -1 10 1 1
for this test case, suppose you forget about the different element 10 and just think about 
the two portions-> the portions have a max subarray sum and a min subarray sum.
If you look closely, you can find that if you somehow find max and min sum, all the numbers between them
can be from a subarray. suppose currently you have a subarray sum k, you add another element which is 
either 1 or -1, so, the sum value would increase by one or decrease by one, if you keep cutting elements
left and right to reach the minimum sum, you'll be getting every number possible till the min sum, same 
goes for max. therefore, [min, max] has all the integers that you can get from those two arrays.




5
-1 -1 -1 -1 -1
2
-1 2
2
7 1
3
1 4 -1

*/