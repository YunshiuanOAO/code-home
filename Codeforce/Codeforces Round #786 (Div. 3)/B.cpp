// Problem: B. Dictionary
// Contest: Codeforces - Codeforces Round #786 (Div. 3)
// URL: https://codeforces.com/contest/1674/problem/B
// Memory Limit: 512 MB
// Time Limit: 2000 ms
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
map<pair<char,char>,int> m;

void solve(){
	string s;
	cin >> s;
	cout << m[make_pair(s[0],s[1])] << '\n';
}


signed main(){
    IOS
    int cnt=1;
	for(int i=0;i<26;i++){
		for(int j=0;j<26;j++){
			if(i==j)continue;
			m[make_pair((char)('a'+i),(char)('a'+j))]=cnt;
			cnt++;
		}
	}
    T
    solve();
}

