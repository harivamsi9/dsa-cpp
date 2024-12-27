#include<iostream>
using namespace std;


void print1(int m, int n){
    /*

    ****
    ****
    ****
    ****

    */
    for (int i = 0; i < m; i++){
        for (int j = 0; j<n;j++){
            cout << "*";
        }
        cout << "\n";
    }
}

void print2(int m, int n){
    /*

    *
    * *
    * * *
    * * * * 
    * * * * *

    */
}



int main(){
    int m,n;
    cin >> m >> n;
    print1(m,n);
    
    return 0;
}