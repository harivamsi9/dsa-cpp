// Reverse an array using recursion

#include<iostream>
using namespace std;

void reverseArray(int arr[], int l, int r){
    // reverse using two pointer and swap those two pointers
    if (l >= r){
        return;
    }
    swap(arr[l], arr[r]);
    reverseArray(arr, l + 1, r - 1);
}

int main(){
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    reverseArray(arr, 0, n - 1);

    // Print the reversed array
    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}