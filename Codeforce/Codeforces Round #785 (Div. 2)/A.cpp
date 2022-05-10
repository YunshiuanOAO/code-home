// Problem: A. Subtle Substring Subtraction
// Contest: Codeforces - Codeforces Round #785 (Div. 2)
// URL: https://codeforces.com/contest/1673/problem/0
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

void solve(){
	string s;
	cin >> s;
	int len=s.size();
	if(len%2==0){
		int A=0;
		for(int i=0;i<len;i++){
			A+=(s[i]-'a'+1);
		}
		cout << "Alice " << A << '\n';
		
	}else{
		int A1=0,B1=0,B2=0,A2=0;
		for(int i=0;i<len-1;i++){
			A1+=(s[i]-'a'+1);
		}
		B1=(s[len-1]-'a'+1);
		
		for(int i=len-1;i>=1;i--){
			A2+=(s[i]-'a'+1);
		}
		B2=(s[0]-'a'+1);
		
		if(abs(A1-B1)>abs(A2-B2)){
			if(A1>B1){
				cout << "Alice " << abs(A1-B1) << '\n';
			}else{
				cout << "Bob " << abs(A1-B1) << '\n';
			}
		}else{
			if(A2>B2){
				cout << "Alice " << abs(A2-B2) << '\n';
			}else{
				cout << "Bob " << abs(A2-B2) << '\n';
			}
		}
		
	}
}


signed main(){
    IOS
    T
    solve();
}

