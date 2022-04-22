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

string s,us;
bool win,lose;
int chance;
int towin;
void guess(char c){
    bool find=0;
    for(int i=0;i<s.size();i++){
        if(c==s[i]){
            find=1;
            s[i]=' ';
            towin--;
        }
    }
    if(!find)chance--;
    if(chance<=0)lose=1;
    if(towin<=0)win=1;
}

void solve(){
    int n;
    while(cin >> n >> s >> us ){
        if(n=-1)break;
        else if(n!=1)cout << '\n';
        cout << "Round " << n << '\n';
        win=0,lose=0;
        chance=7;
        towin=s.size();
        for(int i=0;i<us.size();i++){
            guess(us[i]);
            if(win || lose)break;
        }
        if(win)cout << "You win.";
        else if(lose)cout << "You lose.";
        else cout << "You chickened out.";
    }
}


signed main(){
    IOS
    solve();
}


