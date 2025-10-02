#include <bits/stdc++.h>
using namespace std;

void PhanTichTichNT(int n){
    for (int i = 2; i<= sqrt(n); i++){
        if (n%i==0){
            while (n%i==0){
                cout<<i<<"*";
                n/=i;
            }
        }
    }
    if (n!=1) cout<<n;
}

int snt(int n){
    for (int i = 2; i <= sqrt(n); i++){
        if (n%i==0) return 0;
    }
    return n>1;
}

int check(int n, int s){
    int sum = 0;
    while (n){
        sum+=n%10;
        n/=10;
    }
    return sum==s;
}

void LietKe(int n, int s){
    for (int i = )
}

int main(){
    int n; cin>>n;
    int choice; cin>>choice;

    if (choice==1){
        PhanTichTichNT(n);
    }else{
        int s; cin>>s;
        LietKe(n,s);
    }
    return 0;
}
