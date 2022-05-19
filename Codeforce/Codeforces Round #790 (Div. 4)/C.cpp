// Problem: C. Most Similar Words
// Contest: Codeforces - Codeforces Round #790 (Div. 4)
// URL: https://codeforces.com/contest/1676/problem/C
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
string s[100];

void solve(){
	int n,m;
	cin >> n >> m;
	int ansma=-1,ansmi=1000000000;
	for(int i=0;i<n;i++){
		cin >> s[i];
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			int sum=0;
			for(int k=0;k<m;k++){
				sum+=abs((s[i][k]-'a')-(s[j][k]-'a'));
			}
			ansmi=min(ansmi,sum);
		}
	}
	cout << ansmi << '\n';
}	


signed main(){
    IOS
    T
    solve();
}

