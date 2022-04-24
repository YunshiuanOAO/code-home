#include <iostream>
using namespace std;
int main() {
    double num0=0;
    double num1=0;
    double num2=0;
    cin >> num0;
    num1 = num0 / 12;
    num2 = (int)num0 % 12;
    if(num2>0){
        cout << (int)num1 << " dozen ";
        cout << "and " << (int)num2;
    }
    else{
         cout << (int)num1 << " dozen";
    }
}
