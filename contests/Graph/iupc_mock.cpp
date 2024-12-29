#include<bits/stdc++.h>
using namespace std;

vector<int> bin;

void dectobin(int n){
    if(n==0) return;
    bin.push_back(n%2);
    return dectobin(n/2);
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,p,x,y;
        cin >> n >> p >> x >> y;
        if(n==1){
            cout << 1;
            continue;
        }
        vector<int> binx,biny;
        dectobin(x);
        for(int i=bin.size()-1;i>=0;i--){
            binx.push_back(bin[i]);
        }
        bin.clear();
        dectobin(y);
        for(int i=bin.size()-1;i>=0;i--){
            biny.push_back(bin[i]);
        }
        bin.clear();

        /*for(auto it:binx) cout<<it<<" ";
        cout<<endl;
        for(auto it:biny) cout<<it<<" ";
        cout<<endl;*/

        if(y==0) biny.push_back(0);

        int i=binx.size()-1,j=biny.size()-1;

        long long int ans=0;
        for(;i>=0 && j>=0;i--,j--){
            if(binx[i]==1 && biny[j]==0) ans++;
        }

        if(i>=0){
            while(i>=0){
                if(binx[i]) ans++;
                i--;
            }
        }

        //ans=pow((pow(2,n)-2),ans);
        long long int flg=1;//pow(2,n)-2;
        for(int i = 0; i<n; i++){
            flg = (2*flg)%998244353;
        }
        flg-=2;
        long long int answer=1;
        for(int i=0;i<ans;i++){
            answer*=(flg%998244353);
        }

        cout<<answer%998244353<<endl;

    }


    return 0;
}
