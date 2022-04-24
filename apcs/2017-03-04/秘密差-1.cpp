#include<bits/stdc++.h>
using namespace std;
const int MAXN=10001;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);

    string num;
    int arr[MAXN];
    while(cin >> num){
        int sumg=0,sumo=0;
        int X=0;
        int len=num.size();
        for(int i=0;i<len;i++){
            if(i%2==1){
                sumg+=(num[i]-'0');
            }else{
                sumo+=(num[i]-'0');
            }
        }
        X=sumg-sumo;
        cout << abs(X) << '\n';
    }
}
