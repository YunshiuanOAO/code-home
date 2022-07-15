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

int a[SIZE];

int ans;
void solve(){
    int n;
    while(cin >> n){
    		priority_queue<int, vector<int>, greater<int>> pq;
    		ans=0;
    		for(int i=0;i<n;i++){
    			int x;
    			cin >> x;
    			pq.push(x);
    		}
    		while(pq.size()>1){
    			int a=pq.top();
    			pq.pop();
    			int b=pq.top();
    			pq.pop();
    			ans+=a+b;
    			pq.push(a+b);
    		}
    		cout << ans << '\n';
    	}
    	
    
}


signed main(){
    IOS
    solve();    
}

