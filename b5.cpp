#include <iostream>
#include <iomanip>

using namespace std;
int main()
{
    // input:
    double a = 7.5, b = 3.8;
    // process:
    double x = a * b;
    // output:
    cout << "Area = " << fixed << setprecision(4) << x;
}