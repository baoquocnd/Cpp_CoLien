#include <iostream>
#include <iomanip>

using namespace std;

int main(){
    int n; cin>>n;
    int sum= 0;
    for (int i = 0; i <= n; i++){
        if (i%2==1) sum+=i;
    }
    cout <<sum;
}
