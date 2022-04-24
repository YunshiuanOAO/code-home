// Problem: B. Consecutive Points Segment
// Contest: Codeforces - Educational Codeforces Round 127 (Rated for Div. 2)
// URL: https://codeforces.com/contest/1671/problem/B
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
const int SIZE = 2e5+7;

int a[SIZE];
int t[SIZE];
void solve(){
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	bool flag=0;
	for(int i=0;i<n;i++)t[i]=a[i];
	if(t[0]>0){flag=1;t[0]--;}
	bool ok=1;
	if(flag){
		for(int i=1;i<n;i++){
			if(t[i]==t[i-1]+1){
				t[i]=t[i-1]+1;
			}else if(t[i]+1==t[i-1]+1){
				t[i]=t[i-1]+1;
			}else if(t[i]-1==t[i-1]+1){
				t[i]=t[i-1]+1;	
			}else{ ok=0;break;}
		}
		if(ok){
			cout << "YES" << '\n';
			return;
		}
	}
	
	for(int i=0;i<n;i++)t[i]=a[i];
	ok=1;
	for(int i=1;i<n;i++){
		if(t[i]==t[i-1]+1){
			t[i]=t[i-1]+1;
		}else if(t[i]+1==t[i-1]+1){
			t[i]=t[i-1]+1;
		}else if(t[i]-1==t[i-1]+1){
			t[i]=t[i-1]+1;	
		}else{ ok=0;break;}
	}
	if(ok){
		cout << "YES" << '\n';
		return;
	}
	
	
	for(int i=0;i<n;i++)t[i]=a[i];
	ok=1;
	t[0]++;
	for(int i=1;i<n;i++){
		if(t[i]==t[i-1]+1){
			t[i]=t[i-1]+1;
		}else if(t[i]+1==t[i-1]+1){
			t[i]=t[i-1]+1;
		}else if(t[i]-1==t[i-1]+1){
			t[i]=t[i-1]+1;	
		}else{ ok=0;break;}
	}
	if(ok){
		cout << "YES" << '\n';
		return;
	}
	
	cout << "NO" << '\n';
}


signed main(){
    IOS
    T
    solve();
}

