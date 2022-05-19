// Problem: E. Eating Queries
// Contest: Codeforces - Codeforces Round #790 (Div. 4)
// URL: https://codeforces.com/contest/1676/problem/E
// Memory Limit: 256 MB
// Time Limit: 3500 ms
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

bool cmp(int a,int b){return a>b;}

void solve(){
	int n,q;
	cin >> n >> q;
	int sum=0;
	for(int i=0;i<n;i++){cin >> a[i];sum+=a[i];}
	sort(a,a+n,cmp);
	for(int i=1;i<n;i++){
		a[i]=a[i]+a[i-1];
	}
	while(q--){
		int x;
		cin >> x;
		if(x>sum){
			cout  << -1 << '\n';
			continue;
		}
		int left=0,right=n-1;
		while (left <= right) {
        	int mid = (left + right) / 2; 
	        if (a[mid] > x) {
	            right = mid - 1;
	        } else if (a[mid] < x) {
	            left = mid + 1;
	        } else {
	            left=mid;
	            break; 
	        }
    	}
    	cout << left+1 << '\n';
	}
}


signed main(){
    IOS
    T
    solve();
}

