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

// void getpermuts(vector<int>&arr, int idx, vector<vector<int>>&ans){

//     if(idx==arr.size()){
//         ans.push_back(arr); // Basecase
//         return;
//     }

//     for(int i=idx; i<arr.size(); i++){
//         swap(arr[idx], arr[i]);
//         getpermuts(arr, idx+1, ans);

//         swap(arr[idx], arr[i]); // Backtracking
//     }
// }

// int main(){
//     vector<int>arr = {1,2,3};
//     vector<vector<int>>ans;
//     getpermuts(arr, 0, ans);
    
//     // Print ans
//     for(int i=0; i<ans.size(); i++){
//         for(int j=0; j<ans[i].size(); j++){
//             cout<<ans[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// Factorial
// int factorial(int n){
//     if(n==0 || n==1){
//         return 1;
//     }
    
//     int smallernumber = factorial(n-1);
//     int ans = n * smallernumber;
//     return ans;
// }

// int main(){
//     int n = 5;                // initialize n to a known value
//     cout << factorial(n) << endl; // print factorial of n
//     return 0;
// }

// Leetcode N-Queens
bool issafe(vector<string> &board, int row, int col, int n){
    //Horizontal
    for(int j=0; j<n; j++){
        if(board[row][j]=='Q'){
            return false;
        }
    }
    //Vertical
    for(int i=0; i<n; i++){
        if(board[i][col]=='Q'){
            return false;
        }
    }
    //Left Diagonal
    for(int i=row, j=col; i>=0 && j>=0; i--, j--){
        if(board[i][j]=='Q'){
            return false;
        }
    }
    //Right Diagonal
    for(int i=row, j=col; i>=0 && j<n; i--, j++){
        if(board[i][j]=='Q'){
            return false;
        }
    }
    return true;
}

void nqueens(vector<string>&board, int row, int n, vector<vector<string>>&ans){
    if(row==n){
        ans.push_back(board);
        return;
    }
    for(int j=0; j<n; j++){
        if(issafe(board,row,j,n)){
            board[row][j]='Q';
            nqueens(board,row+1,n,ans);
            board[row][j]='.';
        }
    }
}

int main(){
    int n = 4; // board size (you can change this or read from input)

    // initialize empty board with '.'
    vector<string> board(n, string(n, '.'));

    // store all solutions here
    vector<vector<string>> solutions;

    // run n-queens
    nqueens(board, 0, n, solutions);

    // simple printing: number of solutions and each board
    // cout << "Total solutions: " << solutions.size() << endl;
    for(size_t k = 0; k < solutions.size(); ++k){
        // cout << "Solution " << (k+1) << ":\n";
        for(int i = 0; i < n; ++i){
            cout << solutions[k][i] << '\n';
        }
        cout << '\n';
    }

    return 0;
}