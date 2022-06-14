// Problem: Two Sets
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1092
// Memory Limit: 512 MB
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
	int total = n*(n+1)/2;
	if(total % 2 != 0) {
		cout << "NO" << '\n';
		return;
	}
	vector<int> ans1,ans2;
	total /= 2;
	if(total % n == 0){
		int nowl=1,nowr=n-1;
		bool turn=1;
		while(nowl<nowr){
			if(turn){
				ans1.push_back(nowl);
				ans1.push_back(nowr);
				turn = 0;
			}else {
				ans2.push_back(nowl);
				ans2.push_back(nowr);
				turn = 1;
			}
			nowl++,nowr--;
		}
		ans2.push_back(n);
	}else{
		int nowl=1,nowr=n;
		bool turn=1;
		while(nowl<nowr){
			if(turn){
				ans1.push_back(nowl);
				ans1.push_back(nowr);
				turn = 0;
			}else {
				ans2.push_back(nowl);
				ans2.push_back(nowr);
				turn = 1;
			}
			nowl++,nowr--;
		}
	}
	cout << "YES" << '\n';
	cout << ans1.size() << '\n';
	for(int a:ans1)cout << a << " ";
	cout << '\n';
	cout << ans2.size() << '\n';
	for(int a:ans2)cout << a << " ";
	cout << '\n';
}


signed main(){
    IOS
    solve();
}

