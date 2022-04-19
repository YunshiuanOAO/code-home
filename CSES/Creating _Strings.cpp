// https://cses.fi/problemset/task/1622

#include<bits/stdc++.h>
#define int long long int
using namespace std;

const int SIZE=1e6;

void solve(){
    string s;
    cin >> s;
    sort(s.begin(),s.end());
    vector<string> ans;
    do{
        ans.push_back(s);
    }while(next_permutation(s.begin(),s.end()));
    cout << (int)ans.size() << '\n';
    for(auto x:ans)
        cout << x << '\n';
}

void pre(){

}

signed main(){
    ios::sync_with_stdio(false);cin.tie(0);
    solve();
}
