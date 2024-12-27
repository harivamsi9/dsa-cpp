
/*
Sum of first n numbers
*/


#include<iostream>
using namespace std;

long sumN(int n, long sum){
    if (n == 0){
        return n;
    }
    return n + sumN(n-1, sum + n);
}


// parameterised way
void func(int i, long sum){
    if (i < 0){
        cout << sum << endl;
        return;
    }
    func(i-1, sum + i);
}


// functional recursion way (VVVV IMP -> recursion + dp)
long sumfunctionalRecursive(int n){
    if (n <= 0) {
        return 0;
    }
    return n + sumfunctionalRecursive(n-1);
}


int main(){
    int n;
    cin >> n;
    long sum = 0;

    cout << sumfunctionalRecursive(n) << endl;
    // func(n,sum);

}