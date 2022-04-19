// https://atcoder.jp/contests/abc199/tasks/abc199_c

#include<bits/stdc++.h>
#define int long long int
using namespace std;

const int SIZE=1e6;

int c[SIZE+1];


void solve(){
    int n,q;
    string s;
    cin >> n;
    cin >> s;
    cin >> q;
    int t,a,b,trun=0;
    while(q--){
        cin >> t >> a >> b;
        if(t==1){
            if(trun==1){
                if(a<n)a+=n;
                else a-=n;
                if(b<n)b+=n;
                else b-=n;
            }
            swap(s[a-1],s[b-1]);
        }else{
            trun^=1;
        }
    }
    if(trun){
        for(int i=0;i<n;i++){
            swap(s[i],s[n+i]);
        }
    }
    cout << s << '\n';
}

void pre(){
}

signed main(){
    ios::sync_with_stdio(false);cin.tie(0);
    solve();
}
