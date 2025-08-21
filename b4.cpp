#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    double a = 10.5;
    double b = 7;
    cout << fixed<<setprecision(3)<<a/b;
}