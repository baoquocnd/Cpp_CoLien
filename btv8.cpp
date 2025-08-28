#include <bits/stdc++.h>
using namespace std;

int prime(int x) {
    if (x < 2) return false;
    for (int i = 2; i * i <= x; i++) {
        if (x % i == 0) return false;
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            if (prime(i)) cout << i << " ";
            if (i != n / i && prime(n / i)) cout << n / i << " ";
        }
    }
    if (prime(n)) cout << n; 
    cout << endl;

    return 0;
}
