//https://atcoder.jp/contests/abc141/tasks/abc141_c

#include<bits/stdc++.h>
#define int long long int
using namespace std;

const int SIZE=1e6;

int c[SIZE+1];

void solve(){
    int n,k,q;
    cin >> n >> k >> q;
    for(int i=0;i<q;i++){
        int x;
        cin >> x;
        c[x]++;
    }
    for(int i=1;i<=n;i++){
        cout << ((k-(q-c[i])>0)? "Yes\n" : "No\n" );
    }
}

void pre(){
}

signed main(){
    ios::sync_with_stdio(false);cin.tie(0);
    solve();
}
