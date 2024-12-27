#include<iostream>
using namespace std;


/*

STL
--------------
1. Algorithms
2. Containers
3. Functions
4. Iterators

*/


// pair
void explainPair(){
    pair<int, int> p = {1,3};
    pair<int, pair<int,int>> q = {5, {1,3}};
    cout << p.first << ", " << p.second << endl;
    cout << q.first << ", " << q.second.first << ", " << q.second.second << endl;
    // array of pairs
    pair<int, int> arr[] = { {1,2}, {2,5}, {4,5}};
    cout << arr[1].second << endl;
}

// vectors
void explainVectors(){
    vector<int> v; 
    v.push_back(1);
}



int main(){
    explainPair();
    return 0;
}