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
    int a,b;
    char tmp;
    map<int,int> m;
    while(cin >> a >> tmp >> b){
        if(a==0 && b==0)break;
        m[a]=b;
    }
    int ans=0;
    while(cin >> a >> tmp >> b){
        if(a==0 && b==0)break;
        if(m[a]>0)ans+=m[a]*b;
    }
    cout << ans << '\n';

}


signed main(){
    IOS
    solve();
}


