//https://cses.fi/problemset/task/1069/
#include<bits/stdc++.h>
#define int long long int
#define Debug() cout << "Hello yunshiuan" << '\n';
using namespace std;

const int SIZE=2e5+7;


void solve(){
    string s;
    int cnt=0,ans=-1;
    char pre;
    cin >> s;
    for(int i=0;i<(int)s.size();i++){
        if(i==0){
            pre=s[i],cnt=1;
            continue;
        }
        if(pre!=s[i]){
            pre=s[i];
            ans=max(ans,cnt);
            cnt=1;
        }else{
            cnt++;
        }
    }
    ans=max(ans,cnt);    
    cout << ans << '\n';
}
void pre(){

}

signed main(){
    ios::sync_with_stdio(false);cin.tie(0);
    solve();
}
