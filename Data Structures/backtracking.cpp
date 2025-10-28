#include <iostream>
#include <vector>
using namespace std;

// void ps(vector<int>&arr, vector<int>&ans, int i){
//     if(i==arr.size()){
//         for(int j=0; j<ans.size(); j++){
//             cout<<ans[j]<<" ";
//         }
//         cout<<endl;
//         return;
//     }

//     ans.push_back(arr[i]);
//     ps(arr,ans,i+1);

//     ans.pop_back();
//     ps(arr,ans,i+1);
// }

// int main(){
//     vector<int> arr={1,2,3};
//     vector<int> ans;

//     ps(arr,ans,0);
//     return 0;
// }

// Leetcode problem 78

// void getallsubsets(vector<int>arr, vector<int>&ans, int i, vector<vector<int>>&allsubsets){
//     if(i==arr.size()){
//         allsubsets.push_back(ans);
//         return;
//     }
//     ans.push_back(arr[i]);
//     getallsubsets(arr,ans,i+1,allsubsets);

//     ans.pop_back();
//     getallsubsets(arr,ans,i+1,allsubsets);
// }

// int main(){
//     vector<int>arr = {1,2,3,4,5};
//     vector<vector<int>> allsubsets;
//     vector<int> ans;
//     getallsubsets(arr, ans, 0, allsubsets);
// }

// Leetcode problem 90

// void getallsubsets(vector<int>&arr, vector<int>&ans, int i, vector<vector<int>>&allsubsets){
//     if(i==arr.size()){
//         allsubsets.push_back(ans);
//         return;
//     }

//     //include
//     ans.push_back(arr[i]);
//     getallsubsets(arr,ans,i+1,allsubsets);

//     ans.pop_back();

//     int index = i+1;
//     while(index<arr.size() && arr[index]==arr[index-1]) index++;

//     getallsubsets(arr,ans,i+1,allsubsets);

// }

// int main(){
//     vector<int> arr = {1,1,2,2,3,3};
//     sort(arr.begin(), arr.end());
//     vector<vector<int>>allsubsets;
//     vector<int>ans;
// }

// Leetcode problem 46 Permutations

void getpermuts(vector<int>&arr, int idx, vector<vector<int>>&ans){

    if(idx==arr.size()){
        ans.push_back(arr); // Basecase
        return;
    }

    for(int i=idx; i<arr.size(); i++){
        swap(arr[idx], arr[i]);
        getpermuts(arr, idx+1, ans);

        swap(arr[idx], arr[i]); // Backtracking
    }
}

int main(){
    vector<int>arr = {1,2,3};
    vector<vector<int>>ans;
    getpermuts(arr, 0, ans);
    
    // Print ans
    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans[i].size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}