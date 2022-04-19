//https://codeforces.com/group/gRkn7bDfsN/contest/212807/problem/A
#include<bits/stdc++.h>
#define int long long int
#define Debug() cout << "Hello yunshiuan" << '\n';
using namespace std;

const int SIZE=2001;
int a[SIZE];
int b[SIZE];
int c[SIZE];

void solve(){
    int x;
    cin >> x;
    for(int i=-1000000;i<=1000000;i++){
        if(x==5*i*i*i+i*i-4*i){
            cout << "YES" << '\n';
            return;
        }
    }
    cout << "NO" <<'\n';
}
void pre(){

}

signed main(){
    ios::sync_with_stdio(false);cin.tie(0);
    solve();
}
