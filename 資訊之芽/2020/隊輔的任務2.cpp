#include<bits/stdc++.h>
using namespace std;

int main(){
    int *A,*C,*cntbuf;
    int N,ai,i,j,FStart,FNext,p;
    int cnt,cntsi;

    cin >> N;
    A=new int[N+1];

    for(i=0;i<N;i++){
        cin >> ai;
        if( ai==(i+1) )A[ai]=0;
        else if( ai>0 && ai<=N )A[ai]=i+1;
    }
    for( j=1 ; j<=N ; j++ ){
        if( A[j]!=0 )break;
    }
    if( j>N ){
        cout << 0 << endl;
        delete A;
        exit(0);
    }
    C=new int[N+1];
    cntbuf=new int[N];
    cnt=1;
    i=0;
    FStart=j;
    FNext=FStart;
    cntsi=i;
    while(true){
        C[i++]=FNext;
        p=FNext;
        FNext=A[p]; //找下一個位置
        A[p]=0;     //已經找到位置清0
        if( FNext==FStart || FNext==0 ){   //找到開始值
             for( j=FStart+1 ; j<=N ; j++ ){
                 if( A[j]!=0 )break;
             }
             if( j>N )break;
             cntbuf[cnt-1]=i-cntsi;
             cnt++;
             cntsi=i;
             FStart=j;
             FNext=FStart;
        }
    }
    cntbuf[cnt-1]=i-cntsi;

    cout << cnt << endl;
    p=0;
    for(i=0;i<cnt;i++){
        cout <<cntbuf[i]<< " ";
        for( j=0 ; j<cntbuf[i] ; j++ ){
            cout << C[p++] << " ";
        }
        cout << "\n";
    }
    delete cntbuf;
    delete C;
    delete A;
}
