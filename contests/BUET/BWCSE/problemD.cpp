#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int x,y;
        cin >> y >> x;
        string ans;
        if(y==6 || y==7 || y==9 || y==10){
            if(y==6 || y==7){
                if(x<6){
                    for(int i=1;i<x;i++) ans+="L";
                    for(int i=1;i<y;i++) ans+="U";
                }
                else{
                    ans+="UU";
                    for(int i=1;i<x;i++) ans+="L";
                    for(int i=1;i<y-2;i++) ans+="U";
                }
                ans+="RRDD";
            }
            if(y==10){
                ans+="UU";
                for(int i=1;i<x;i++) ans+="L";
                for(int i=1;i<y-2;i++) ans+="U";
                ans+="RRDD";;
            }
            if(y==9){
                ans+="U";
                for(int i=1;i<x;i++) ans+="L";
                for(int i=1;i<y-1;i++) ans+="U";
                ans+="RRDD";;
            }
        }
        else{
            bool cont=false;
            if(y==3){
                if(x<3){
                    for(int i=x;i<3;i++) ans+="R";

                }
                else if(x<9){
                    for(int i=x;i<9;i++) ans+="R";
                }
                else{
                    for(int i=x;i>9;i--) ans+="L";
                }
            }
            else{
                for(int i=1;i<x;i++) ans+="L";
                for(int i=1;i<y;i++) ans+="U";
                ans+="RRDD";
            }
        }
        cout << ans.size() << endl << ans << endl;
    }
    return 0;
}