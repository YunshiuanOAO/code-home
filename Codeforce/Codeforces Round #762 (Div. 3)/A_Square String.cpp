//https://codeforces.com/contest/1619/problem/A
#include<bits/stdc++.h>
//#define int long long int
using namespace std;

const int SIZE=2005;

int a[SIZE];

void solve(){
    memset(a,0,sizeof(a));
    string s;
    cin >> s;
    int len=s.size();
    if(len%2==1){
        cout << "NO" << '\n';
        return;
    }
    string left,right;
    for(int i=0;i<len/2;i++){
        left+=s[i];
    }
    for(int i=len/2;i<len;i++){
        right+=s[i];
    }
    if(left!=right){
        cout << "NO" << '\n';
    }else{
        cout << "YES" << '\n';
    }
}
signed main(){
    ios::sync_with_stdio(false);cin.tie(0);
    int t;
    cin >> t;
    while(t--)
    solve();
}
