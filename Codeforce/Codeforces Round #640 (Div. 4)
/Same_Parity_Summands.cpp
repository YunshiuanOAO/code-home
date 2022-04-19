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
    int n,k;
    cin >> n >> k;
    int last1=n-(k-1);
    if(last1>0 && last1&1==1){
        cout << "YES" << '\n';
        for(int i=0;i<k-1;i++)cout << "1 ";
        cout << last1 << '\n';
        return;
    }
    int last2=n-2*(k-1);
    if(last2>0 && last2%2==0){
        cout << "YES" << '\n';
        for(int i=0;i<k-1;i++)cout << "2 ";
        cout << last2 << '\n';
        return;
    }
    cout << "NO" << '\n';
}


signed main(){
    IOS
    T
    solve();
}


