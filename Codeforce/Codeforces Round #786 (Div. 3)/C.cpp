// Problem: C. Infinite Replacement
// Contest: Codeforces - Codeforces Round #786 (Div. 3)
// URL: https://codeforces.com/contest/1674/problem/C
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
	string a,b;
	cin >> a >> b;
	bool flaga=0,flagb=0;
	int len=(int)a.size();
	if(b.size()==1){
		if(a[0]!=b[0]){
			cout<< (1LL<<len) << '\n';	
		}else{
			cout << 1 << '\n';
		}
	}else{
		for(int i=0;i<b.size();i++){
			if(b[i]=='a')flaga=1;
			if(b[i]!='a')flagb=1;
		}
		if(flaga==1 && flagb==1)cout<< -1 << '\n';
		else if(flaga==1 && flagb==0){
			cout << len+1 << '\n';
		}
		else cout << (1LL<<len) << '\n';
	}
}


signed main(){
    IOS
    T
    solve();
}

