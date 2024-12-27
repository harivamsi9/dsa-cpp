#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int find2ndHighest(int n, int arr[]){
    sort(arr, arr+n);
    int max2 = arr[1];
    // for (int i = 0; i < n; i++){
    //     cout << arr[i] << " ";
    // }
    return max2;
}

int main() {
	// your code goes here
    int t; 
    cin >> t;
    while (t > 0){
        int n;
        cin >> n;
        int arr[n];
        // cout << t << n << "\n";
        for (int i=0;i<n;i++){
            cin >> arr[i];
        }
        // for (int i = 0; i< n ; i++){
        //     cout << arr[i] << " ";
        // }
        // cout << "\n";


        cout << find2ndHighest(n, arr) << "\n";
        t -= 1;
    }

}
