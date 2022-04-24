#include <bits/stdc++.h>
using namespace std;

int eval(){
    int x,y,z;
    char t[100];
    cin >> t;
    if(t[0]=='f'){
        x=eval();
        return 2*x-3;
    }else if(t[0]=='g'){
        x=eval();
        y=eval();
        return 2*x+y-7;
    }else if(t[0]=='h'){
        x=eval();
        y=eval();
        z=eval();
        return 3*x-2*y+z;
    }else{
        return atoi(t);
    }
}

int main() {
    ios::sync_with_stdio(false);cin.tie(0);
    cout << eval() << '\n';
    return 0;
}
