// Problem: B. Array Decrements
// Contest: Codeforces - Codeforces Round #797 (Div. 3)
// URL: https://codeforces.com/contest/1690/problem/B
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
const int SIZE = 5e4+7;

int a[SIZE];
int b[SIZE];

void solve(){
	int n;
	cin >> n;
	for(int i=0;i<n;i++)cin >> a[i];
	for(int i=0;i<n;i++)cin >> b[i];
	int d=-1;
	bool flag=1;
	for(int i=0;i<n;i++){
		if(a[i]<b[i]){
			cout << "NO" << '\n';
			return;
		}
		if(b[i]!=0){
			d=a[i]-b[i];
		}
	}
	if(d==-1){
		cout << "YES" << '\n';
		return;
	}
	for(int i=0;i<n;i++){
		if(a[i]-b[i]!=d){
			if(a[i]-b[i]<d && b[i]==0){
				continue;
			}else {
				flag=0;
				break;
			}
		}
	}
	if(n==1){
		if(a[0]<b[0]){
			cout << "NO" << '\n';
		}else {
			cout << "YES" << '\n';
		}
		return;
	}
	if(flag)cout << "YES" << '\n';
	else cout << "NO" << '\n';
}


signed main(){
    IOS
    T
    solve();
}

