// Problem: E. Mirror Grid
// Contest: Codeforces - Codeforces Round #806 (Div. 4)
// URL: https://codeforces.com/contest/1703/problem/E
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
const int SIZE = 1<<10;

char a[SIZE][SIZE];

void solve(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++)for(int j=0;j<n;j++)cin >> a[i][j];
    int ans=0;
    if(n%2==1){
    	int x=n/2;
    	int y=n/2;
    	int cnt1=0;
    	int cnt2=0;
    	int nowx1=x-1,nowy1=y,nowx2=x+1,nowy2=y,nowx3=x,nowy3=y-1,nowx4=x,nowy4=y+1;
    	while(nowx1>=0){
    		cnt1=0,cnt2=0;
    		if(a[nowx1][nowy1]=='1')cnt1++;
    		else cnt2++;
    		if(a[nowx2][nowy2]=='1')cnt1++;
    		else cnt2++;
    		if(a[nowx3][nowy3]=='1')cnt1++;
    		else cnt2++;
    		if(a[nowx4][nowy4]=='1')cnt1++;
    		else cnt2++;
    		ans+=min(cnt1,cnt2);
    		nowx1--;
    		nowx2++;
    		nowy3--;
    		nowy4++;
    	}
    }

    for(int i=0;i<=n/2;i++){
    	for(int j=0;j<n;j++){
    		if(i!=n-i-1 && j!=n-j-1 && a[i][j]!=a[n-i-1][n-j-1]){
    			ans++;
    			a[i][j]=a[n-i-1][n-j-1];
    		}
    	}
    }
    cout << ans << '\n';
}


signed main(){
    IOS
    T
    solve();    
}

