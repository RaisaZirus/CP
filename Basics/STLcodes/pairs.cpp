#include<bits/stdc++.h>
using namespace std;
int main(){
    /// Declare a pair of integers
    pair<int,int> p;

    p = make_pair ( 2, 3 );
	cout << p.first << " " << p.second << endl; /// 2 3

	p.first++;
	//cout << p.first << " " << p.second << endl; /// 3 3

	pair<int, int> p1 = { 2, 3 };
	pair<int, int> p2 = { 1, 6 };

	/// Getting minimum of 2 pairs
	p = min ( p1, p2 );
	//cout << p.first << " " << p.second << endl; /// 1 6

	/// Getting maximum of 2 pairs
	p = max ( p1, p2 );
	//cout << p.first << " " << p.second << endl; /// 2 3
}