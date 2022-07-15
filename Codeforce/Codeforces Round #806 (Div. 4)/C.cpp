// Problem: C. Cypher
// Contest: Codeforces - Codeforces Round #806 (Div. 4)
// URL: https://codeforces.com/contest/1703/problem/C
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

int a[SIZE];

void solve(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++)cin >> a[i];
	for(int i=0;i<n;i++){
		int b;
		string s;
		cin >> b >> s;
		for(int j=0;j<s.size();j++){
			if(s[j]=='U'){
				a[i]--;
				if(a[i]<0)a[i]+=10;
			}
			if(s[j]=='D'){
				a[i]++;
				if(a[i]>9)a[i]-=10;
			}
		}
	}
	for(int i=0;i<n;i++)cout << a[i] << " ";
	cout << '\n';
}


signed main(){
    IOS
    T
    solve();    
}

