#include <iostream>
#include <iomanip>
using namespace std;

int main(){
    //input:
    double a = 10.5, b = 7;
    //process:
    double x = a/b;
    //output:
    cout << fixed<<setprecision(3)<<x;
}