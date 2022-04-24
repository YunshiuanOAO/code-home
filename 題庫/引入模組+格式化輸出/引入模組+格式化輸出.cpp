#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;
int main() {
    float num,num2;
    cin >> num;
    num2=sqrt(num)*10;
	cout << "Original: " << setiosflags(ios::fixed)<<   setprecision(2) << num << endl;
    cout << "Adjusted: " << setiosflags(ios::fixed)<<   setprecision(2) << num2;
    cout <<"(+" << setiosflags(ios::fixed)<<   setprecision(0) <<num2-num <<")"  << endl;
}
