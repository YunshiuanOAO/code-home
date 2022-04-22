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
const int SIZE = 2e5+7;

int a[SIZE];
int b[SIZE];
int c[SIZE];

void solve(){
    int n;
    cin >> n;
    map<int,int> m;
    for(int i=0;i<n;i++)cin >> a[i];
    b[0]=a[0];
    m[b[0]]=1;
    for(int i=1;i<n;i++){
        b[i]=b[i-1]+a[i];
        m[b[i]]=i+1;
    }
    c[0]=a[n-1];
    vector<int> ans;
    if(m.count(c[0]) && m[c[0]]+1<=n){
         ans.push_back(m[c[0]]+1);
    }
    for(int i=1;i<n;i++){
        c[i]=c[i-1]+a[n-i-1];
        if(m.count(c[i])&& m[c[i]]+i+1<=n){
            ans.push_back(m[c[i]]+i+1);
        }

    }
    //for(int i=0;i<n;i++)cout << b[i] << " ";
    //cout << '\n';
    //for(int i=0;i<n;i++)cout << c[i] << " ";
    //cout << '\n';
    if(ans.size()==0) cout << 0 << '\n';
    else {
        sort(ans.begin(),ans.end());
        cout << ans[ans.size()-1] << '\n';
    }

}


signed main(){
    IOS
    T
    solve();
}


