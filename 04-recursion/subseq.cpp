

/*
Print all sub-seq
- PowerSet Method
- Recursion Method*


arr = {3,1,2}

subseq:
{}
3
1
2
3, 2
3, 1
1, 2
3, 1, 2

==> For n = 3, there are 8 sub-seq


*/

#include<iostream>
using namespace std;

void subseq(int i, int n, vector<int> &v, int arr[]){
    if (i >= n){
        for (int num : v) {
            cout << num << " ";
        }
        if (v.size() == 0){
            cout << "{}";
        }
        cout << endl;
        return;
    }
    v.push_back(arr[i]);
    subseq(i+1, n, v, arr);
    v.pop_back();
    subseq(i+1, n, v, arr);
}


bool subseqSumK(int i, int n, vector<int> &ds, int arr[], int target){
    if (target == 0){
        // found one of the answers
        for (int c: ds){
            cout << c << " ";
        }
        cout << endl;
        return true;
    }
    if (i >= n || target < 0){
        // not found in this seq; stop this seq now
        return false;
    }
    
    ds.push_back(arr[i]);
    if(subseqSumK(i+1, n, ds, arr, target - arr[i])){
        return true;
    }

    ds.pop_back();
    if(subseqSumK(i+1, n, ds, arr, target)){
        return true;
    }
    return false;

}

int coutSubSeq(int i, int n, vector<int> &ds, int arr[], int target){
    // base case
    if (target == 0){
        // found one
        return 1;
    }
    if (target <= 0 || i >= n){
        return 0;
    }
    ds.push_back(arr[i]);
    int left = coutSubSeq(i+1, n, ds, arr, target - arr[i]);
    ds.pop_back();
    int right = coutSubSeq(i+1, n, ds, arr, target);

    return left + right;
}

int main(){
    // int arr[] = {3,1,2,5,0,4};
    int arr[] = {1,2,1};
    int k = 2;
    vector<int> ds;
    // subseq(0, sizeof(arr)/sizeof(arr[0]), v, arr);
    // subseqSumK(0, sizeof(arr)/sizeof(arr[0]), ds, arr, k);
    int count = coutSubSeq(0, sizeof(arr)/sizeof(arr[0]), ds, arr, k);

    cout << count << endl;

    return 0;
}