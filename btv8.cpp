#include <bits.stdc++.h>
using namespace std;

int prime(int n){
    for (int i = 2; i <= sqrt(n); i++){
        if (n%i==0) return 0;
    }
    return n>1;
}

int main(){
    int n; cin>>n;
    set <int> res;
    for (int i = 2; i <= sqrt(n); i++){
        if (prime(i)) res.insert(i);
        if (i!= n/i && prime(n/i)) res.insert(n/i);
    }
    if (prime(n)) res.insert(n);
    for (int x : res) cout <<x<<" ";
}
