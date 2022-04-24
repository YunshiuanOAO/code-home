#include <iostream>
using namespace std;
int main() {
    int num,num2;
    cin >>num;
    while(num>0){
        if(num%7==0){
            cout << "YES" << endl;
            break;
        }
        num2=num%10;
        if(num2==7){
            cout << "YES" << endl;
            break;
        }
        num=num/10;
    }
    cout << "NO" << endl;
}
