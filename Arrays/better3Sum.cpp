#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

/*Problem statement:
    1) U have to make triplets that sums up to zero.
        array can have duplicate values  → [-1, -1, 0, 1, 2]
    2) No duplicate triplets
    what matters is that the same combination doesn't appear twice
*/
/*
brute approach: n^3 -> previous logic arr[i]+arr[j]+arr[k] == 0
Better approach: n^2  -> new logic arr[k] = -(arr[i]+arr[j]) moved i and j arr element to other side
    First we need to remove the third loop that we are using in brute force approach
*/


vector<int> arr = {-1, 0, 1, 2, -1, -4};
int n = arr.size();
vector<vector<int>> Better3Sum(vector<int> arr , int n){
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            /*logic here*/
        }
    }
}
int main(){
    vector<vector<int>> ans = Better3Sum(arr,n);
}