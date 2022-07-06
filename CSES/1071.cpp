//https://cses.fi/problemset/task/1071/
#include<bits/stdc++.h>
#define int long long int
#define Debug() cout << "Hello yunshiuan" << '\n';
using namespace std;

const int SIZE=2e5+7;

void solve(){
    int x,y;
    cin >> x >> y;
    if(x > y){
        if(x&1){
            cout << (x-1)*(x-1)+1+y-1 << '\n'; 
        }else{
            cout << x*x-y+1 << '\n';
        }   
    }else {
        if(y&1){
            cout <<  y*y-x+1 << '\n'; 
        }else{
            cout << (y-1)*(y-1)+1+x-1 << '\n';
        }
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
