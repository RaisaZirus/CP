//https://www.geeksforgeeks.org/problems/count-distinct-pairs-with-difference-k1233/1
//Count distinct pairs with difference k

#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main(){
    optimize();
    int n ; cin >> n ;
    vector<int> nums(n) ; int k;
    cin >> k; 
    for(auto &u:nums)cin >> u;
    
    vector<pair<int,int>> v;
	    for(int i = 0; i < nums.size()-1; i++){
	        for(int j = i+1; j  < nums.size(); j++){
	            pair<int,int> p = {nums[i], nums[j]};
                v.push_back(p);
	        }
	    }   
	    sort(v.begin(), v.end());
	    int index = unique(v.begin(), v.end())-v.begin();
	    int answer = 0;
	    for(int i = 0; i< index; i++){
	        int diff = abs(v[i].first-v[i].second);
	        if(diff == k) answer++;
	    }
	    cout << answer << "\n";
    //doing this with unique doesn't bring the correct answer 
    //should use set instead


}
/*

class Solution {
public:
    int TotalPairs(vector<int> nums, int k)
    {
        // Code here
        int n = nums.size();

        set<pair<int, int> > s;

        // Pick all elements one by one
        for (int i = 0; i < n; i++) {
            // See if there is a pair of this picked element
            for (int j = i + 1; j < n; j++) {
                if (abs(nums[i] - nums[j]) == k) {
                    s.insert({ min(nums[i], nums[j]),
                               max(nums[i], nums[j]) });
                }
            }
        }

        return (int)s.size();
    }
};

*/