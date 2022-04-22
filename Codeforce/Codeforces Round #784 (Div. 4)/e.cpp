#include<iostream>
#include<iomanip>
#include<math.h>
#include<vector>
#include<algorithm>
#include<map>
#include<set>
#include<queue>
#include<bitset>
#include<cctype>
#include<deque>
#include<string>
#include<stack>
#include<string.h>
#define int long long int
#define IOS ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define T int _T;cin >> _T;while(_T--)
using namespace std;
const int SIZE = 1<<20;

void solve(){
    int n;
    cin >> n;
    map<int,int> m;
    for(int i=0;i<n;i++){
        char a,b;
        cin >> a >> b;
        m[a-b]++;
    }
    vector<int> v;
    for(auto x:m)v.push_back(x.second);
    int ans=0;
    for(int i=0;i<v.size();i++){
        for(int j=i+1;j<v.size();j++){
            ans+=v[i]*v[j];
        }
    }
    cout << ans << '\n';
}


signed main(){
    IOS
    T
    solve();
}


