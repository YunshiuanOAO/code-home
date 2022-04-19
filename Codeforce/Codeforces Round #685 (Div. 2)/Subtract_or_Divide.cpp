#include<bits/stdc++.h>
#define int long long int
#define Debug() cout << "Hello yunshiuan" << '\n';
using namespace std;

const int SIZE=1001;
int a[SIZE];

void solve(){
    int n;
    cin >> n;
    if(n==1){
        cout << "0" << '\n';
        return;
    }
    if(n==2){
        cout << "1" << '\n';
        return;
    }
    if(n==3){
        cout << "2" << '\n';
        return;
    }
    if(n&1){
        cout << "3" << '\n';
    }else{
        cout << "2" << '\n';
    }
}
void pre(){

}

signed main(){
    ios::sync_with_stdio(false);cin.tie(0);
    int t;
    cin >> t;
    while(t--)
    solve();
}
