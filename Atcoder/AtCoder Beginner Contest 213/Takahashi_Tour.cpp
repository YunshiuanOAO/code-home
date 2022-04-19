//https://atcoder.jp/contests/abc213/tasks/abc213_d
#include<bits/stdc++.h>
//#define int long long int
#define Debug() cout << "Hello yunshiuan" << '\n';
using namespace std;

const int SIZE=2e5+7;
const int MAX=1e9+7;

vector<int> v[SIZE];

void dfs(int x,int lt){
    cout << x << ' ';
    for(int y:v[x]){
        if(y==lt)continue;
        dfs(y,x);
        cout << x << ' ';
    }
}

void solve(){
    int n;
    cin >> n;
    for(int i=0;i<n-1;i++){
        int x,y;
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    for(int i=1;i<=n;i++){
        sort(v[i].begin(),v[i].end());
    }
    dfs(1,1);
}

void pre(){
    
}

signed main(){
    ios::sync_with_stdio(false);cin.tie(0);
    solve();
}
