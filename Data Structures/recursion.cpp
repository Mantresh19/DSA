#include <iostream>
#include <vector>
using namespace std;

// Sorted Array
// bool issorted(vector<int> arr, int n){
//     if(n==0 || n==1){
//         return true;
//     }
//     return arr[n-1] >= arr[n-2] && issorted(arr, n-1);
// }

// int main(){
//     vector<int> arr = {1};

//     cout<<issorted(arr, arr.size()) << endl;
//     return 0;
// }


// Binary Search
// int bs(vector<int>& arr, int tar, int st, int end){
//     if(st<=end){
//         int mid = (st+end)/2;

//         if(arr[mid]==tar)
//             return mid;
//         else if(arr[mid]<=tar){
//             return bs(arr, tar, mid+1, end);
//                 }
//         else{
//             return bs(arr,tar,st,mid-1);
//                 }
//         }
//         return -1;
//     }

//     int main(){
//         vector<int>arr = {1,3,0,5,9,14,24,16,12};
//         int tar = 24;
//         int index = bs(arr, tar, 0, arr.size()-1);
//         cout << index << endl;
//     }

// Recursive Fibonacci function
// int fib(int n) {
//     if (n <= 1) {
//         return n;  // Base case: fib(0)=0, fib(1)=1
//     }
//     return fib(n - 1) + fib(n - 2);  // Recursive call
// }

// int main() {
//     // Print first 10 Fibonacci numbers
//     for (int i = 0; i < 10; i++) {
//         cout << fib(i) << " ";
//     }
//     cout << endl;
//     return 0;
// }