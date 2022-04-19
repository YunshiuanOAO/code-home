#include<bits/stdc++.h>
using namespace std;
int s[4];
int main(){
    ios::sync_with_stdio(false);cin.tie(0);
    for(int i=0;i<3;i++){
        cin >> s[i];
    }
    sort(s,s+3);
    for(int i=0;i<3;i++){
        cout << s[i] << " ";
    }
    cout <<'\n';
    if(s[0]*s[0]+s[1]*s[1]==s[2]*s[2]){
        cout << "Right" ;
    }else if(s[0]*s[0]+s[1]*s[1]>s[2]*s[2]){
        cout << "Acute";
    }else if(s[0]+s[1]<=s[2]){
        cout << "No";
    }else{
        cout << "Obtuse" ;
    }
}
