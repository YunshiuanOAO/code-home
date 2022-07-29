// Problem: B. Berland Crossword
// Contest: Codeforces - Educational Codeforces Round 105 (Rated for Div. 2)
// URL: https://codeforces.com/problemset/problem/1494/B
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

int get_bit(int a,int b){return (a>>b)&1;}

int a[SIZE];

void solve(){
	int n;
	cin >> n;
	for(int i=0;i<4;i++)cin >> a[i];
	for(int i=0;i<(1<<4);i++){
		int U=0,R=0,L=0,D=0;
		for(int j=0;j<4;j++){
			if(get_bit(i,j)){
				if(j==0){
					U++,R++;
				}else if(j==1){
					R++,D++;
				}else if(j==2){
					D++,L++;
				}else{
					L++;U++;
				}
			}
		}
		//cout << i << ": " << U << " " << R << " " << D << " " << L << '\n';
		int cnt=0;
		for(int j=0;j<4;j++){
			if(j==0){
				if(U>a[j] || U+n-2<a[j])break;
				else cnt++;
			}else if(j==1){
				//cout << R+n-2 << '\n';
				if(R>a[j] || R+n-2<a[j])break;
				else cnt++;
			}else if(j==2){
				if(D>a[j] || D+n-2<a[j])break;
				else cnt++;
			}else{
				if(L>a[j] || L+n-2<a[j])break;
				else cnt++;
			}
		}
		if(cnt==4){
			cout << "YES" << '\n';
			return;
		}
	} 
	cout << "NO" << '\n';
}


signed main(){
    IOS
    T
    solve();
}

