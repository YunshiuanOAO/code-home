//https://cses.fi/problemset/task/1624/
#include<bits/stdc++.h>
#define int long long int
#define Debug() cout << "Hello yunshiuan" << '\n';
using namespace std;
 
const int SIZE=8;
 
char chess[SIZE][SIZE];
 
void solve(){
    vector<int> p;
    for(int i=0;i<SIZE;i++){
        for(int j=0;j<SIZE;j++){
            cin >> chess[i][j];            
        }
        p.push_back(i);
    }
    int ans=0;
   //枚舉每列的皇后會在哪一格。
    do{
        int u[2][SIZE*2]={};
        bool err=0;
        for(int i=0;i<SIZE;i++){
            if(chess[i][p[i]]=='*' || u[0][i+p[i]] || u[1][i-p[i]+SIZE]){
                err=1;
                break;
            }
            u[0][i+p[i]]=1;
            u[1][i-p[i]+SIZE]=1;
        }
        if(!err){
            ans++;
        }
        //Debug();
    }while(next_permutation(p.begin(),p.end()));
    cout << ans << '\n';
 
}
void pre(){
 
}
 
signed main(){
    ios::sync_with_stdio(false);cin.tie(0);
    solve();
}
