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
    for(int i=0;i<n;i++){
        int x;
        cin >> x;
        if(x<=1399)cout << "Division 4" << '\n';
        else if(x<=1599)cout << "Division 3" << '\n';
        else if(x<=1899)cout << "Division 2" << '\n';
        else cout << "Division 1" << '\n';
        
    }
}


signed main(){
    IOS
    solve();
}


