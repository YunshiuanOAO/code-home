//https://codeforces.com/group/gRkn7bDfsN/contest/209717/problem/B
#include<bits/stdc++.h>
#define int long long int
#define Debug() cout << "Hello yunshiuan" << '\n';
using namespace std;

const int SIZE=1001;
int a[SIZE];

void solve(){
    int n;
    cin >> n;
    for(int i=0;i<n;i++)
        cin >> a[i];
    int now=1;
    while(1){
        bool err=0;
        for(int i=0;i<n;i++){
            if(a[i]%now==0){
                err=1;
                break;
            }
        }
        if(!err){
            cout << now << '\n';
            return;
        }
        now++;
    }
}
void pre(){

}

signed main(){
    ios::sync_with_stdio(false);cin.tie(0);
    solve();
}
