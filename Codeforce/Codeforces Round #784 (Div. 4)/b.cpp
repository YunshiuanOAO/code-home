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
const int SIZE = 2e5+7;

int a[SIZE];

void solve(){
    int n;
    memset(a,0,sizeof(a));
    cin >> n;
    vector<int> ans;
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        a[x]++;
        if(a[x]==3)ans.push_back(x);
    }
    if((int)ans.size()==0)cout << -1 ;
    else cout << ans[0];
    cout << '\n';
}


signed main(){
    IOS
    T
    solve();
}


