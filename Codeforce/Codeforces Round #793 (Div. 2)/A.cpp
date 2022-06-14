// Problem: A. Palindromic Indices
// Contest: Codeforces - Codeforces Round #793 (Div. 2)
// URL: https://codeforces.com/contest/1682/problem/0
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
	string s;
	cin >> s;
	if(s.size()%2==0){
		int ans=2;
		int now=s.size()/2;	
		char pre=s[now];
		for(int i=now+1;i<s.size();i++){
			if(s[i]!=pre)break;
			else ans+=2;
		}
		cout << ans << '\n';
	}else{
		int ans=1;
		int now=s.size()/2;	
		char pre=s[now];
		for(int i=now+1;i<s.size();i++){
			if(s[i]!=pre)break;
			else ans+=2;
		}
		cout << ans << '\n';
	}
	
}


signed main(){
    IOS
    T
    solve();
}

