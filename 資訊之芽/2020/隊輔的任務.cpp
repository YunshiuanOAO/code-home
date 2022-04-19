#include<bits/stdc++.h>
using namespace std;
int main(){
    int *A,*B,*C;
    int N,i,j,len,FStart,FNext,p,cnt=0;

    cin >> N;
    A=new int[N];
    B=new int[N+1];
    C=new int[N];

    for(i=0;i<N;i++){
        cin >> A[i];
    }
    FStart=1;
    i=0;
    B[i++]=FStart;
    FNext=FStart;
    rtfdc  v
    while( FNext<=N ){
        for( p=1 ; p<=N ; p++ ){
            if( A[p-1]==FNext )break;
        }
        if( p==FStart ){
            C[cnt++]=i;
            for( j=1 ; j<=N ; j++ ){
                for( p=0 ; p<i ; p++ ){
                   if( j==B[p] )break;
                }
                if( p==i )break;
            }
            if( j>N )break;
            FStart=j;
            B[i++]=FStart;
            FNext=FStart;
        }
        else {
            B[i++]=p;
            FNext=p;
        }
    }

    cout << cnt << endl;
    p=0;
    for(i=0;i<cnt;i++){
        if( i )len=(C[i]-C[i-1]);
        else len=C[i];
        cout <<len<< " ";
        while(len){
            cout << B[p++] << " ";
            len--;
        }
        cout << "\n";
    }
    delete C;
    delete B;
    delete A;
}
