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
    string s;
    cin >> s;
    bool flag=0;
    bool f=0;
    bool flagW=1;
    int rcnt=0,bcnt=0;
    vector<char> v;
    for(int i=0;i<n;i++){
        if(s[i]!='W'){
            flagW=0;
            v.push_back(s[i]);
        }else{
            if(v.size()!=0){
                if(v.size()==1){
                    cout << "NO" << '\n';
                    return;
                } 
                if(v.size()==2){
                    if(v[0]==v[1]){
                        cout << "NO" << '\n';
                        return;
                    }
                }
                char tmp;
                bool flag2=1;
                for(int i=0;i<v.size();i++){
                    if(i==0)tmp=v[i];
                    else if(tmp!=v[i])flag2=0;
                }
                if(flag2){
                    cout << "NO" << '\n';
                    return;
                }
                v.clear();
            }
        }
    }
    if(v.size()!=0){
        if(v.size()==1){
            cout << "NO" << '\n';
            return;
        } 
        if(v.size()==2){
            if(v[0]==v[1]){
                cout << "NO" << '\n';
                return;
            }
        }
        char tmp;
        bool flag2=1;
        for(int i=0;i<v.size();i++){
            if(i==0)tmp=v[i];
            else if(tmp!=v[i])flag2=0;
        }
        if(flag2){
            cout << "NO" << '\n';
            return;
        }
    }
    cout << "YES" << '\n';

}


signed main(){
    IOS
    T
    solve();
}


