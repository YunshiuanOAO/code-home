// Problem: Coin Piles
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1754
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

/*

solution : 

2x+y=a 2y+x=b
a+b = 3x+3y

(a+b)/3 = x+y

so if (a+b)%3!=0 is not correct

*/

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
	int a,b;
	cin >> a >> b;
	if(b>a)swap(a,b);
	if(a > 2*b || (a+b)%3!=0)cout << "NO" << '\n';
	else cout << "YES" << '\n'; 
}


signed main(){
    IOS
    T
    solve();
}

