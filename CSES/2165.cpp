// Problem: Tower of Hanoi
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/2165
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

void hanoi(int n, int A, int B, int C) {
    if(n == 1) {
        cout << A << " " << C << '\n';
    }
    else {
        hanoi(n-1, A, C, B);
        hanoi(1, A, B, C);
        hanoi(n-1, B, A, C);
    }
}

void solve(){
	int n;
	cin >> n;
	cout << (1<<n)-1 << '\n';
	hanoi(n,1,2,3);
}


signed main(){
    IOS
    solve();
}

