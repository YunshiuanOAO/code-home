//https://cses.fi/problemset/task/1068/
#include<bits/stdc++.h>
#define int long long int
#define Debug() cout << "Hello yunshiuan" << '\n';
using namespace std;

const int SIZE=8;

void solve(){
   int n;
   cin >> n;cout << n << " ";
   while(n>1)
    cout << ((n&1) ? n=n*3+1 : n/=2) << " ";

}
void pre(){

}

signed main(){
    ios::sync_with_stdio(false);cin.tie(0);
    solve();
}
