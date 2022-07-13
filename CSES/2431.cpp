// Problem: Digit Queries
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/2431
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
    int len=1,cnt=9,start=1;
	while(n>len*cnt){
		n-=len*cnt;
		len++;
		cnt*=10;
		start*=10;
	}
	start += (n-1)/len;
	string t=to_string(start);
	cout << t[(n-1)%len] << '\n';
	 
}


signed main(){
    IOS
    T
    solve();    
}

