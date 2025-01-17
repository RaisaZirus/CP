#include<bits/stdc++.h>
using namespace std;
int main(){
    //freopen("input.txt","r", stdin);
    int t; cin >> t;
    while(t--){
        int n,m ; cin >> n >> m;
        string s; cin >> s;
        vector<vector<long long int>> matrix(n,vector<long long int>(m));
        for(int i = 0; i< n; i++){
            for(int j=0; j<m;j++){
                cin >> matrix[i][j];
            }
        }
        
        int row = 0, col = 0;
        for(int k = 0; k<s.length();k++){
            if(s[k]=='D'){
                //calculate 1st row, row stationary, column moves 
                long long int sum = 0;
                for(int i = 0; i<m;i++){
                    sum+=matrix[row][i];
                }
                matrix[row][col]-=sum;
                row++;
            }else{
                //calculate 1st column, col stationary, row moves 
                long long int sum = 0;
                for(int i = 0; i<n;i++){
                    sum+=matrix[i][col];
                }
                matrix[row][col]-=sum;
                col++;
            }
        }
        //bottom right calculation
        for(int i = 0; i<m-1; i++){
            matrix[n-1][m-1]-=matrix[n-1][i];
        }
        for(int i = 0; i< n; i++){
            for(int j=0; j<m;j++){
                cout<< matrix[i][j] << " ";
            }
            cout << "\n";
        }
    }
}