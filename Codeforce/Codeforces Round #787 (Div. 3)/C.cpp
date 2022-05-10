// Problem: C. Detective Task
// Contest: Codeforces - Codeforces Round #787 (Div. 3)
// URL: https://codeforces.com/contest/1675/problem/C
// Memory Limit: 256 MB
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
	int len=s.size(),max1=-1;
	bool flag=1;
	for(int i=0;i<len;i++){
		if(s[i]!='?')flag=0;
		
		if(s[i]=='1'){
			if(i==len-1)ans++;
			else max1=max(max1,i);
		}
		if(s[i]=='0'){
			if(i==0)ans++;
			else 
		}
	}
}


signed main(){
    IOS
    T
    solve();
}

