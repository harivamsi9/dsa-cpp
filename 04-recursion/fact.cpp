#include<iostream>
using namespace std;

long fact(int n){
    // returns the factorial of n
    if (n <= 1){
        return 1;
    }
    return n * fact(n-1);
}

int main(){
    int n;
    cin >> n;
    cout << fact(n) << endl;
    return 0;
}