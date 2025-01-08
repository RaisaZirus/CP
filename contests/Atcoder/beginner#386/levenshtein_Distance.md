#Levenshtein Distance 
## https://atcoder.jp/contests/abc386/tasks/abc386_f
## https://en.wikipedia.org/wiki/Levenshtein_distance

In information theory, linguistics, and computer science, the Levenshtein distance is a string metric for measuring the difference between two sequences. The Levenshtein distance between two words is the minimum number of single-character edits (insertions, deletions or substitutions) required to change one word into the other. It is named after Soviet mathematician Vladimir Levenshtein, who defined the metric in 1965.

```C++
    #include<bits/stdc++.h>

    using namespace std;

    int main(){
    int k;
    string s,t;
    cin >> k >> s >> t;
    int sl=s.size();
    int tl=t.size();
    if(abs(sl-tl)>k){
        cout << "No\n";
        return 0;
    }

    vector<vector<int>> dp(sl+1,vector<int>(2*k+1,1e9));
    dp[0][k]=0;
    for(int i=0;i<=sl;i++){
        for(int dj=0;dj<=2*k;dj++){
        int j=i+dj-k;
        if(j<0){continue;}
        if(j>tl){break;}
        
        if(i>0 && dj<2*k){
            dp[i][dj]=min(dp[i][dj],dp[i-1][dj+1]+1);
        }
        if(j>0 && dj>0){
            dp[i][dj]=min(dp[i][dj],dp[i][dj-1]+1);
        }
        if(i>0 && j>0){
            int add=1;
            if(s[i-1]==t[j-1]){ add=0; }
            dp[i][dj]=min(dp[i][dj],dp[i-1][dj]+add);
        }
        }
    }

    if(dp[sl][k+tl-sl]<=k){cout << "Yes\n";}
    else{cout << "No\n";}
    return 0;
    }
