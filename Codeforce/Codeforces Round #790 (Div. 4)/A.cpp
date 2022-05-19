// Problem: A. Lucky?
// Contest: Codeforces - Codeforces Round #790 (Div. 4)
// URL: https://codeforces.com/contest/1676/problem/0
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
	string s;
	cin >> s;
	int ans1=(s[0]-'a')+(s[1]-'a')+(s[2]-'a');
	int ans2=(s[3]-'a')+(s[4]-'a')+(s[5]-'a');
	if(ans1==ans2)cout << "YES" << '\n';
	else cout << "NO" << '\n';
}


signed main(){
    IOS
    T
    solve();
}

