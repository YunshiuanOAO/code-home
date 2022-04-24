// Problem: A. String Building
// Contest: Codeforces - Educational Codeforces Round 127 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1671/problem/0
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

void solve(){
	string s;
	cin >> s;
	if(s.size()==1){
		cout << "NO" << '\n';
		return;
		
	}
	for(int i=0;i<s.size()-1;i++){
		if(i==0){
			if(s[0]!=s[1]){
				cout << "NO" << '\n';
				return;
			}
			
		}
		if(i>0 && s[i]=='a' && s[i+1]=='b' && s[i-1]=='b'){
			cout << "NO" << '\n';
			return;
		}
		if(i>0 && s[i]=='b' && s[i+1]=='a'&& s[i-1]=='a'){
			cout << "NO" << '\n';
			return;
		}
	}
	if(s[s.size()-1]!=s[s.size()-2]){
		cout << "NO" << '\n';
		return;
		
	}
	cout << "YES" << '\n';
}


signed main(){
    IOS
    T
    solve();
}

