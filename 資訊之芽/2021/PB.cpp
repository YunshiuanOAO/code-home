#include<bits/stdc++.h>
#define int long long 
#define Debug() cout << "Hello world" << '\n';
using namespace std;


void solve(){
    int n,m,q,ans=0;
    cin >> n >> m >> q;
    while(q--){
        int x,y,fx,fy,sx,sy;
        cin >> x >> y >> fx >> fy >> sx >> sy;
        if(x==fx && y==fy){
            ans++;
            continue;
        }
        if(x==sx){
            if(x==fx || sy== fy){
                ans++;
                continue;
            } 
        }
        if(y==sy){
            if(y==fy|| sx==fx){
                ans++;
                continue;
            }
        }
    }
    cout << ans << '\n';
}

signed main(){
    ios::sync_with_stdio(false);cin.tie(0);
    solve();
}