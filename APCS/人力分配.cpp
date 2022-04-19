#pragma GCC optimize("Ofast,no-stack-protector")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,tune=native")

#include<bits/stdc++.h>
using namespace std;

long long int X,Y,ans,i;

int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    cin >> X;
    for(i=-X;i<=X;i++){
        ans=(i*(5*i-4)*(i+1))-X;
        if(ans==0){
            cout << "yes";
            break;
        }
    }
    if(i>X)cout << "NO";
}
