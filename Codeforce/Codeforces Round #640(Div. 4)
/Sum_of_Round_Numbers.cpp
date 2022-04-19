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
    string s;
    cin >> s;
    int cnt=0;
    for(int i=0;i<s.size();i++)if(s[i]!='0')cnt++;
    cout << cnt << '\n';
    reverse(s.begin(),s.end());
    for(int i=0;i<s.size();i++){
        if(s[i]!='0')
            cout << (s[i]-'0')*pow(10,i) << " ";
    }
    cout << '\n';
}


signed main(){
    IOS
    T
    solve();
}


