// Problem: Tower of Hanoi
// Contest: CSES - CSES Problem Set
// URL: https://cses.fi/problemset/task/2165
// Memory Limit: 512 MB
// Time Limit: 1000 ms
// 
// Powered by CP Editor (https://cpeditor.org)

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
void add(int *a, int *b, int *c) { 
    int i, carry = 0; 

    for(i = N - 1; i >= 0; i--) { 
        c[i] = a[i] + b[i] + carry; 
        if(c[i] < 10000) 
            carry = 0; 
        else { 
            c[i] = c[i] - 10000; 
            carry = 1; 
        } 
    } 
} 

void sub(int *a, int *b, int *c) { 
    int i, borrow = 0; 

    for(i = N - 1; i >= 0; i--) { 
        c[i] = a[i] - b[i] - borrow; 
        if(c[i] >= 0) 
            borrow = 0; 
        else { 
            c[i] = c[i] + 10000; 
            borrow = 1; 
        } 
    } 
} 
bool lagerthan(int *a,int*b){
	if(strlen(a)>strlen(b))return 1;
    else if(strlen(a)<strlen(b))return 0;
    else {
    	for(int i=100-1;i>=0;i++){
       		if(a[i]>b[i])return 1;
	       	else if(a[i]<b[i])return 0;
            
    }
    return 0;
}
void mul(int *a, int b, int *c) { 
    int i, tmp, carry = 0; 

    for(i = N - 1; i >=0; i--) { 
        tmp = a[i] * b + carry; 
        c[i] = tmp % 10000;    
        carry = tmp / 10000; 
    } 
} 

void div(int *a, int b, int *c) { 
    int i, tmp, remain = 0; 

    for(i = 0; i < N; i++) { 
        tmp = a[i] + remain; 
        c[i] = tmp / b; 
        remain = (tmp % b) * 10000; 
    } 
} 

void hanoi(int n, int A, int B, int C) {
    if(n == 1) {
        cout << A << " " << C << '\n';
    }
    else {
        hanoi(n-1, A, C, B);
        hanoi(1, A, B, C);
        hanoi(n-1, B, A, C);
    }
}

void solve(){
	int n;
	cin >> n;
	cout << (1<<n)-1 << '\n';
	hanoi(n,1,2,3);
}


signed main(){
    IOS
    solve();
}

