#include <bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    int a[5],b[5];
    int cnta=0,cntb=0;
    int n=2;
    while(n--){
        int suma=0,sumb=0;
        for(int i=0;i<4;i++){
            cin >> a[i];
            suma+=a[i];
        }
        for(int i=0;i<4;i++){
            cin >> b[i];
            sumb+=b[i];
        }
        cout << suma << ":" << sumb;
        cout << '\n';
        if(suma>sumb)cnta++;
        if(suma<sumb)cntb++;
    }
    if(cnta>cntb)cout << "Win" ;
    if(cnta==cntb)cout << "Tie";
    if(cnta<cntb)cout << "Lose";
}
