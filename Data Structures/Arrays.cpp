// #include <iostream>
// using namespace std;

// Reverse Array
// void reversearray(int arr[], int sz){
// 	int start = 0, end = sz-1;
// 	while(start<end){
// 		swap(arr[start], arr[end]);
// 		start++;
// 		end--;
// 	}
// }

// Linear Search
// int linearsearch(int arr[], int sz, int target){
// 	for(int i=0; i<sz; i++){
// 		if(arr[i]==target){
// 			return i;
// 		}
// 	}

// 	return -1;
// }

// WAF to add and product numbers in an array
// void addproduct(int arr[], int sz) {
//     int sum = 0;
//     int product = 1;
//     for(int i=0; i<sz; i++){
//         sum+=arr[i];
//         product *= arr[i];
//     }
//     cout<<"Sum = "<< sum << endl;
//     cout<<"Product = "<< product << endl;
// }

// WAF to swap min and max numbers in an array
// void swapMinMax(int arr[], int sz) {
//     int minIndex = 0, maxIndex = 0;
//     for(int i = 1; i < sz; i++) {
//         if(arr[i] < arr[minIndex]) minIndex = i;
//         if(arr[i] > arr[maxIndex]) maxIndex = i;
//     }
//     // Swap min and max
//     int temp = arr[minIndex];
//     arr[minIndex] = arr[maxIndex];
//     arr[maxIndex] = temp;
// }

// WAF to print all unique values in an array
// void printUnique(int arr[], int sz) {
//     for (int i = 0; i < sz; i++) {
//         bool isUnique = true;   // assume current element is unique

//         // check against every other element
//         for (int j = 0; j < sz; j++) {
//             if (i != j && arr[i] == arr[j]) {
//                 isUnique = false;   // found a duplicate
//                 break;
//             }
//         }

//         if (isUnique) {
//             cout << arr[i] << " ";
//         }
//     }
//     cout << endl;
// }

// Swap min max arrays
// void swapminmax(int arr[], int sz ){
//     int minindex = 0, maxindex = 0;
//     for(int i=1; i<sz; i++){
//         if(arr[i]<arr[minindex]) minindex = i;
//         if(arr[i]>arr[maxindex]) maxindex = i;
//     }
//     int temp = arr[minindex];
//     arr[minindex] = arr[maxindex];
//     arr[maxindex] = temp;
// }

// int main() {

// Swap min max arrays
// 	int arr[] = {5,2,1,9,7};
//     int sz = 5;
//     swapminmax(arr,sz);

//     for(int i=0; i<sz; i++){
//         cout<<arr[i]<<" ";
//     }
//     return 0;

// WAF to print all unique values in an array
// 	int arr[] = {1, 2, 3, 1, 2, 3, 4};
//     int sz = sizeof(arr) / sizeof(arr[0]);
//     cout << "Unique values: ";
//     printUnique(arr, sz);

//     return 0;

// WAF to swap min and max numbers in an array
//     int arr[] = {5, 2, 9, 1, 7};
//     int sz = 5;
//     swapMinMax(arr, sz);  // perform swap
//     for(int i=0; i<sz; i++){
//         cout << arr[i] << " ";
//     }
//     return 0;
	
// WAF to add and product numbers in an array
// 	int arr[] = {1,2,3,4};
//     int sz = 4;
//     addproduct(arr,sz);

// Linear Search
// 	int arr[] = {1,2,3,4,5};
// 	int sz = 5;
// 	int target = 4;
// 	cout<<linearsearch(arr,sz,target)<<endl;
// 	return 0;

// Reverse a Array
// 	int arr[] = {1,2,3,4,5};
// 	int sz = 5;
// 	reversearray(arr,sz);
// 	for(int i=0; i<sz; i++){
// 		cout<<arr[i];
// 	}
// 	cout<<endl;
// 	return 0;

// Find smallest number in an Array
// 	int nums[] = {12,13,55,6,-22,-90};
// 	int size = 6;
// 	int smallest = INT_MAX;
// 	int smallestIndex = 0;
// 	for(int i=0; i<size; i++){
// 		if(nums[i] < smallest){
// 			smallest = nums[i];
// 			smallestIndex = i;
// 		}
// 	}
// 	cout << "smallest = " << smallest << ", at index = " << smallestIndex << endl;
// 	return 0;
// }