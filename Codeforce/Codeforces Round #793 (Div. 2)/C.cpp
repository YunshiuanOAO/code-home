// Problem: C. LIS or Reverse LIS?
// Contest: Codeforces - Codeforces Round #793 (Div. 2)
// URL: https://codeforces.com/contest/1682/problem/C
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
const int SIZE = 2e5+7;

int a[SIZE],b[SIZE],c[SIZE];

void solve(){
	int n;
	cin >> n;
	for(int i=0;i<n;i++){
		cin >> a[i];
	}
	if(n==1 || n==2){
		cout << 1 << '\n';
		return;
	}
	sort(a,a+n);
	int l=0,r=1;
	int lans=1,rans=1;
	int cnt=0;
	int Max=a[n-1];
	while(r<n){
		b[cnt]=a[l];
		b[n-cnt-1]=a[r];
		l+=2;r+=2;
		cnt++;	
	}
	if(l<n){
		b[cnt]=a[n-1];
	}
	bool flag=0;
	if(a[n-1]!=a[n-2] && n%2==0){
		for(int i=0;i<n;i++){
			c[i]=b[i];
		}
		swap(c[n/2],c[n/2-1]);
		flag=1;
	}
	for(int i=0;i<n;i++)cout << b[i] << " ";
	cout << '\n';
	for(int i=0;i<n;i++)cout << c[i] << " ";
	cout << '\n';
	for(int i=1;i<n;i++){
		if(b[i]==Max){
			if(b[i]!=b[i-1])
				lans++;
			break;
		}
		if(b[i]!=b[i-1])
			lans++;
	}
	for(int i=n-2;i>=0;i--){
		if(b[i]==Max){
			if(b[i]!=b[i+1])
				rans++;
			break;
		}
		if(b[i]!=b[i+1])
			rans++;
	}
	if(flag){
		int lans2=1,rans2=1;
		for(int i=1;i<n;i++){
			if(c[i]==Max){
				if(c[i]!=c[i-1])
					lans2++;
				break;
			}
			if(c[i]!=c[i-1])
				lans2++;
		}
		for(int i=n-2;i>=0;i--){
			if(c[i]==Max){
				if(c[i]!=c[i+1])
					rans2++;
				break;
			}
			if(c[i]!=c[i+1])
				rans2++;
		}
		cout << rans2 << " " << lans2 << '\n'; 
		cout << max(min(lans,rans),min(lans2,rans2)) << '\n';
	}else cout << min(lans,rans) << '\n';
}


signed main(){
    IOS
    T
    solve();
}

