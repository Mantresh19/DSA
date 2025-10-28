                                    // Apna College DSA Playlist
#include <iostream>
#include <vector>
using namespace std;

int main(){

// Learn how to create and print a vector
    vector <int>vec = {1,2,3};
    for(int i=0; i<vec.size(); i++){
        cout<<vec[i]<<" ";
    }
    cout<<endl;

// Size
    cout<<vec.size()<<endl;

// Pushback
    vector <int>newvec;
    newvec.push_back(66);
    newvec.push_back(77);
    newvec.push_back(50);
    for(int i=0; i<newvec.size(); i++){
        cout<<newvec[i]<<" ";
    }
    cout<<endl;
    return 0;


// Leetcode problem 136 (Single Number)

}