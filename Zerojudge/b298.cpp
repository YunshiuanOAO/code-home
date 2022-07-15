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

bool problem[10005];
vector<int> v[10005];
 
void dfs(int x){
	if(problem[x])return;
	problem[x]=1;
	for(auto &now:v[x]){
		dfs(now);
	}
}
 
void solve(){
    int n,m,l,q;
    cin >> n >> m >> l >> q;
    for(int i=0;i<m;i++){
    	int a,b;
    	cin >> a >> b;
    	v[a].push_back(b);
    }
    
    for(int i=0;i<l;i++){
    	int x;
    	cin >> x;
    	dfs(x);
    }
    for(int i=0;i<q;i++){
    	int y;
    	cin >> y;
    	if(problem[y]==0){
    		cout << "YA~~" << '\n';
    	}else{
    		cout << "TUIHUOOOOOO" << '\n';
    	}
    }
}


signed main(){
    IOS
    solve();    
}

