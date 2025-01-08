#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin >> n;
    vector<vector<int>> v(n,vector<int>(2));
    for(int i = 0; i< n; i++){
        int x , y;
        cin >> x >> y;
        v[i][0] = x/1000000; v[i][1] = y/1000000;
    }
    vector<int> poison_max;
    int curr_max = 0;
    int curr_max2 = INT_MIN; bool just_out_of_0 = false;
    for(int i = 0; i< n; i++){
        if(v[i][0]==1){
            if(curr_max2<0 && just_out_of_0 == true){
                //which means age theke kichui khaoya hoini
                poison_max.push_back(curr_max2);
                just_out_of_0 = false;
            }
            curr_max = max(curr_max, v[i][1]);
            curr_max2 = INT_MIN;
        }else{
            if(curr_max>0)poison_max.push_back(curr_max);
            //cout << curr_max << "curr" << endl;
            curr_max = 0;
            if(v[i][1]>0)poison_max.push_back(v[i][1]);
            curr_max2 = max(curr_max2, v[i][1]);
            just_out_of_0 = true;
        }
    }
    if(curr_max>0)poison_max.push_back(curr_max);
    long long int answer = 0;
    cout << "now the list " << endl;
    for(auto u:poison_max){
        cout << u << "\n";
        answer+=(long long int)u;
    }
    cout << answer << endl;
}
//a solution I found interesting 
/*
//https://atcoder.jp/contests/abc306/submissions/42358449
#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll MAXN = 3e5+5;
ll n,a[MAXN],b[MAXN],ans1,ans2;
int main()
{
	ios::sync_with_stdio(false);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>b[i];
		if(a[i]==1) ans1=max(ans1,ans2+b[i]);
		else ans2=max(ans2,max(ans2+b[i],ans1+b[i]));
	}
	cout<<max(ans1,ans2)<<endl;
	return 0;
}

*/