#include<iostream>
using namespace std;

// print name n times using recursion

void printName(int n, string name) {
    if (n == 0){
        return;
    }
    cout << name << endl;
    printName(n-1, name);
}

void printN(int i, int n){
    if (i > n){
        return;
    }
    cout << i << endl;
    printN(i+1, n);
}


// Print for 1 -> N without +
// backtracking

void print1toNbacktracking(int i, int n){
    if (i < 1){
        return;
    }
    print1toNbacktracking(i-1, n);
    cout << i << endl;
}



int main(){

    int n;
    cin >> n;
    // cin.ignore(); // clear the input buffer
    // string s;
    // getline(cin, s);
    // cout << n << s << endl;
    // printName(n, s); // uncomment and use the correct variable
    print1toNbacktracking(5,n);
    return 0;
}