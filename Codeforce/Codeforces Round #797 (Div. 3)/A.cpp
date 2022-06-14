// Problem: A. Print a Pedestal (Codeforces logo?)
// Contest: Codeforces - Codeforces Round #797 (Div. 3)
// URL: https://codeforces.com/contest/1690/problem/0
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

#include<iostream>
#include<iomanip>
#include<math.h>
#include<vector>
#include<algorithm>
#include<map>
#include<set>
#include<queue>
#include<bitset>
#include<cctype>
#include<deque>
#include<string>
#include<stack>
#include<string.h>
#define int long long int
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define T int _T;cin >> _T;while(_T--)
using namespace std;
const int SIZE = 1<<20;

void solve(){
	int n;
	cin >> n;
	int a1=n/3;
	int a2=n/3;
	int a3=n/3;
	if(n%3==1){
		a2++;
	}else if(n%3==2){
		a1++,a2++;
	}
	a3--,a2++;
	cout << a1 << " " << a2 << " " << a3 << '\n';
}


signed main(){
    IOS
    T
    solve();
}

