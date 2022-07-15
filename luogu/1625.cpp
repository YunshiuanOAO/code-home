// Problem: Grid Paths
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/1625
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

int ans=0;
bool u[100][100];
string s;

void f(int nowx,int nowy,int i){
	
	if ((u[nowx][nowy - 1] && u[nowx][nowy + 1])
		&& (!u[nowx-1][nowy] && !u[nowx+1][nowy ])) return;
	if ((u[nowx - 1][nowy] && u[nowx + 1][nowy])
		&& (!u[nowx][nowy - 1] && !u[nowx][nowy + 1])) return;
	
	if(nowx==6 && nowy==0){
		if(s.size()==i)
			ans++;
		return;
	}
	
	if(s.size()==i)return;
	
	u[nowx][nowy]=1;		
	
	if(s[i]=='?'){
		
		if(nowx+1<7 && !u[nowx+1][nowy]){
			f(nowx+1,nowy,i+1);
		}
		
		if(nowy+1<7 && !u[nowx][nowy+1]){
			f(nowx,nowy+1,i+1);
		}
		
		if(nowx-1>=0 && !u[nowx-1][nowy]){
			f(nowx-1,nowy,i+1);
		}
		
		if(nowy-1>=0 && !u[nowx][nowy-1]){
			f(nowx,nowy-1,i+1);
		}
		
	}else if(s[i]=='U'){
		
		if(nowx-1>=0 && !u[nowx-1][nowy]){
			f(nowx-1,nowy,i+1);
		}
		
	}else if(s[i]=='D'){
		
		if(nowx+1<7 && !u[nowx+1][nowy]){
			f(nowx+1,nowy,i+1);
		}
	
	}else if(s[i]=='L'){
	
		if(nowy-1>=0 && !u[nowx][nowy-1]){
			f(nowx,nowy-1,i+1);
		}
	
	}else if(s[i]=='R'){
	
		if(nowy+1<7 && !u[nowx][nowy+1]){
			f(nowx,nowy+1,i+1);
		}
	
	}
	u[nowx][nowy]=0;
}

void solve(){
    cin >> s;
    ans=0;
    f(0,0,0);
    cout << ans << '\n';
}


signed main(){
    IOS
    solve();    
}

